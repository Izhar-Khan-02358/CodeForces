#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        long long ans=ar[n-1]-ar[0];
        for(int i=0;i<n;i++){
            ans=max(ans,ar[n-1]-ar[i]);
        }
        for(int i=0;i<n;i++){
            ans=max(ans,ar[i]-ar[0]);
        }
        for(int i=0;i<n;i++){
            ans=max(ans,ar[i]-ar[i+1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
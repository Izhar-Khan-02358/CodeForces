#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int u=a[0];
        int ans=0;
        for(int i=1;i<n;i++){
            if(a[i]<u){
                ans++;
            }else{
                u=a[i];
            }
        }

        cout<<ans<<endl;;
    }
    return 0;
}
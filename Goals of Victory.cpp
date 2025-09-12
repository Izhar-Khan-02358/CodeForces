#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int ar[n-1];
        int ans=0;
        for(int j=0;j<n-1;j++){
            cin>>ar[j];
            ans+=ar[j];
        }
        cout<<-(ans)<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int u=n*k;
        int ar[u];
        for(int i=0;i<u;i++){
            cin>>ar[i];
        }
        int m=0;
        int w=(n/2)+1;
        int p=u;
        int ans=0;
        do{
            p-=w;
            ans+=ar[p];
            m++;
        }while(m<k);

        cout<<ans<<endl;
    }
    return 0;
}
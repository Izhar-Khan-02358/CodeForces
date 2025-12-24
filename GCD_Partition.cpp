#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        int ts=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            ts+=ar[i];
        }

        int p[n];
        p[0]=ar[0];
        for(int i=1;i<n;i++){
            p[i]=ar[i]+p[i-1];
        }

        int a=0;
        int g=1;
        for(int i=0;i<n-1;i++){
            int u=ts-p[i];
            
            g=__gcd(u,p[i]);
            a=max(a,g);
        }

        cout<<a<<endl;

    }
    return 0;
}
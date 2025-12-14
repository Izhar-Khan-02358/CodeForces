#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        int ar[n];
        int as=0;
        int g=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            as+=(ar[i]*ar[i]);
            g+=ar[i];
        }

        int v=0;
        int h=0;
        int u=as-c;
        long double f=(long double)u/4;
        long double d=(long double)(g*g)-4*n*f;
        long double D=sqrt(d);
        int i=(int)(-g+D)/(2*n);

        cout<<i<<endl;
    }
    return 0;
}
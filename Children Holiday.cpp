#include<bits/stdc++.h>
using namespace std;
#define int long long

int check(int a,int m,int n,vector<int>t,vector<int>z,vector<int>y){
    int u=0;
    for(int i=0;i<n;i++){
        int x=(t[i]*z[i])+y[i];
        int tc=a/x;
        int r=a%x;

        int tb=tc*z[i]+min(z[i],r/t[i]);
        u+=tb;

        if(u>=m){
            return true;
        }
    }
    return false;
}

signed main(){
        int m,n;
        cin>>m>>n;
        vector<int>a(n),b(n),c(n),d(n);
        for(int i=0;i<n;i++){
            int p,q,r;
            cin>>p>>q>>r;
            a[i]=p;
            b[i]=q;
            c[i]=r;
        }

        int l=0;
        int h=1e18;
        int z=0;
        while(l<=h){
            int md=l+((h-l)/2);
            if(check(md,m,n,a,b,c)){
                h=md-1;
                z=md;
            }else{
                l=md+1;
            }
        }

        cout<<z<<endl;

        int e=m;

        for(int i=0;i<n;i++){
            int tc=a[i]*b[i]+c[i];
            int f=z/tc;
            int r=z%tc;

            int w=f*b[i]+min(b[i],r/a[i]);

            d[i]=min(w,e);
            e-=d[i];
        }

        for(auto x:d){
            cout<<x<<" ";
        }cout<<endl;
    return 0;
}
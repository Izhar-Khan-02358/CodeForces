#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        int b[n];
        int c[n];
        int h=k;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        int u=0;
        for(int i=0;i<n;i++){
            if(b[i]>u){
                u=b[i];
            }
            c[i]=u;
        }

        int p[n];
        p[0]=a[0];
        for(int i=1;i<n;i++){
            p[i]=p[i-1]+a[i];
        }
        
        int f=0;
        for(int i=0;i<n && i<h;i++){
            int v=0;
            v+=p[i];
            v+=((k-(i+1))*c[i]);
            f=max(f,v);
        }
            
        cout<<f<<endl;
    }
    return 0;
}
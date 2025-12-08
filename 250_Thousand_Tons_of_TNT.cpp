#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int u=n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        int p[n];
        p[0]=ar[0];
        for(int i=1;i<n;i++){
            p[i]=p[i-1]+ar[i];
        }

        if(n==1){
            cout<<0<<endl;
            continue;
        }
        
        int md=0;
        for(int k=1;k<=n;k++){
            if(n%k!=0){
                continue;
            }

            int mx=LLONG_MIN;
            int mn=LLONG_MAX;

            for(int i=0;i<n;i+=k){
                int s=0;
                if(i==0){
                    s=p[i+k-1];
                }else{
                    s=p[i+k-1]-p[i-1];
                }
                
                mx=max(mx,s);
                mn=min(mn,s);
            }
            md=max(md,mx-mn);
        }

        cout<<md<<endl;
    }
    return 0;
}
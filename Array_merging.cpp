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
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        int u=1;
        int v=1;
        vector<int>f(2*n+1,0);
        vector<int>s(2*n+1,0);
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                u++;
            }else{
                f[a[i]]=max(f[a[i]],u);
                u=1;
            }


            if(b[i]==b[i+1]){
                v++;
            }else{
                s[b[i]]=max(s[b[i]],v);
                v=1;
            }
        }

        f[a[n-1]]=max(f[a[n-1]],u);

        s[b[n-1]]=max(s[b[n-1]],v);

        int ans=0;
        for(int i=1;i<=2*n;i++){
            ans=max(ans,f[i]+s[i]);
        }
        
        cout<<ans<<endl;
    }
    return 0;
}
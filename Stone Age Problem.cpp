#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
        int n,q;
        cin>>n>>q;
        vector<int>ar(n+1);
        vector<int>br(n+1,0);
        int s=0;
        for(int i=1;i<=n;i++){
            cin>>ar[i];
            s+=ar[i];
        }
        int m=0;
        int cv=0;
        for(int i=1;i<=q;i++){
            int t;
            cin>>t;
            if(t==2){
                int u;
                cin>>u;
                s=u*n;
                m=i;
                cv=u;
            }else{
                int u,v,z;
                cin>>u>>v;
            
                if(br[u]<m){
                    z=cv;
                }else{
                    z=ar[u];
                }
                s=s+v-z;
                ar[u]=v;
                br[u]=i;
            }
            cout<<s<<endl;
        }
    return 0;
}
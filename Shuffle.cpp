#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x;
        cin>>n>>x>>m;
        vector<pair<int,int>>ar;
        int l=x;
        int r=x;
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            ar.push_back({u,v});

            if(l>v or r<u){
                continue;
            }else{
                r=max(v,r);
                l=min(u,l);
            }
        }

        cout<<r-l+1<<endl;
    }
    return 0;
}
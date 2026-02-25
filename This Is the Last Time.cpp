#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,pair<int,int>>>v;
        int u=k;

        for(int i=0;i<n;i++){
            int p,q,r;
            cin>>p>>q>>r;
            v.push_back({p,{q,r}});
        }

        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(u>=v[i].first&& u<=v[i].second.first){
                u=max(u,v[i].second.second);
                k=v[i].second.second;
            }
        }

        cout<<u<<endl;
    }
    return 0;
}
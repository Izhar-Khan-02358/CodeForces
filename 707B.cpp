#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=(1e5)+1;

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    map<pair<int,int>,int>mp;
    vector<int>bk(n+1);
    vector<int>vt[n+1];
    for(int i=1;i<=m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        vt[u].push_back(v);
        vt[v].push_back(u);

        mp[{u,v}]=(mp[{u,v}]==0)?w:min(mp[{u,v}],w);
        mp[{v,u}]=(mp[{u,v}]==0)?w:min(mp[{u,v}],w);
    }

    vector<int>br(k+1);
    for(int i=1;i<=k;i++){
        cin>>br[i];
        bk[br[i]]=1;
    }

    if(k==0 or k==n){
        cout<<-1<<endl;
        return;
    }

    int ans=LLONG_MAX;
    for(int i=1;i<=k;i++){
        int v=br[i];
        for(int c:vt[v]){
            if(bk[c]==0){
                ans=min(ans,mp[{v,c}]);
            }
        }
    }

    if(ans==LLONG_MAX){
        cout<<-1<<endl;
    }else{
        cout<<ans<<endl;
    }

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
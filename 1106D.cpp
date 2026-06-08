#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=(1e5)+1;
vector<int>vt[N];

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>vis(n+1,0);
    vector<int>ans;
    for(int i=1;i<=m;i++){
        int u,v;cin>>u>>v;
        vt[u].push_back(v);
        vt[v].push_back(u);
    }

    set<int>s;
    s.insert(1);
    vis[1]=1;
    while(!s.empty()){
        int v=*s.begin();
        s.erase(s.begin());

        ans.push_back(v);

        for(int child:vt[v]){
            if(vis[child]==0){
                vis[child]=1;
                s.insert(child);
            }
        }
    }

    for(auto x:ans){
        cout<<x<<" ";
    }cout<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=100+1;
vector<pair<int,int>>vt[N];
vector<int>vis(N);

int dfs(int b){
    vis[b]=1;

    int h=0;
    for(auto x:vt[b]){
        int p=x.first;
        int q=x.second;
        if(vis[p]==0){
            h=max(h,q+dfs(p));
        }
    }

    return h;
}

void solve() {
    int n;
    cin>>n;
    
    for(int i=1;i<=n-1;i++){
        int u,v,w;
        cin>>u>>v>>w;
        vt[u].push_back({v,w});
        vt[v].push_back({u,w});
    }

    cout<<dfs(0)<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
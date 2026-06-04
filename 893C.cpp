#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;
vector<int>vt[N+1];
vector<int>ar(N+1);
vector<int>vis(N+1);
int a=LLONG_MAX;

int dfs(int v){
    if(vis[v]==0){
        vis[v]=1;
        a=min(a,ar[v]);
        for(int x:vt[v]){
            dfs(x);
        }
    }

    return a;
}

void solve() {
    int n,m;
    cin>>n>>m;
    
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }

    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        vt[u].push_back(v);
        vt[v].push_back(u);
    }

    int ans=0;
    for(int i=1;i<=n;i++){
        a=LLONG_MAX;
        if(vis[i]==0){
            dfs(i);
            ans+=a;
        }
        
    }

    cout<<ans<<endl;

    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
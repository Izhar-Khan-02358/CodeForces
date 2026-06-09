#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;
vector<int>vt[N];
vector<int>dg(N);
vector<int>vis(N);

void dfs(int v, bool &c){
    vis[v]=1;

    if(dg[v]!=2){
        c=false;
    }

    for(int x:vt[v]){
        if(!vis[x]){
            dfs(x,c);
        }
    }
}

void solve() {
    int n,m;
    cin>>n>>m;
    
    for(int i=1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        vt[u].push_back(v);
        vt[v].push_back(u);
        dg[u]++;dg[v]++;
    }

    int u=0;

    for(int i=1;i<=n;i++){
        if(!vis[i]){
            vis[i]=1;
            bool c=true;
            dfs(i,c);

            if(c){
                u++;
            }
        }
    }

    cout<<u<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;
vector<int>vt[N];
vector<int>dg(N);
vector<int>vis(N);
int vc,ec;

void dfs(int v){
    vis[v]=1;
    vc++;
    ec+=vt[v].size();

    for(int x:vt[v]){
        if(!vis[x]){
            dfs(x);
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
            vc=0;
            ec=0;
            dfs(i);

            if(ec!=(vc*(vc-1))){
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    cout<<"YES"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
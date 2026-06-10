#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=101;
vector<pair<int,int>>vt[N];

int dfs(int v,int pr, int cost){
    if(v==1){
        return cost;
    }

    for(auto x:vt[v]){
        int p=x.first;
        int q=x.second;

        if(p!=pr){
            return dfs(p,v,cost+q);
        }
    }
    return cost;
}

void solve() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int u,v,w;
        cin>>u>>v>>w;
        vt[u].push_back({v,0});
        vt[v].push_back({u,w});
    }

    int r=vt[1][0].first;
    int rm=vt[1][0].second;
    int f=dfs(r,1,rm);

    int g=vt[1][1].first;
    int gm=vt[1][1].second;
    int j=dfs(g,1,gm);

    cout<<min(f,j)<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
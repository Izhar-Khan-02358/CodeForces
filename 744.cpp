#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=(1e5)+5;
vector<int>vt[N];
vector<int>vis(N);
void dfs(int v, int &s){
    s++;
    vis[v]=1;

    for(auto x:vt[v]){
        if(!vis[x]){
            dfs(x,s);
        }
    }
    
}

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>ar(k+1);
    vector<int>gv;
    int gn=0;
    for(int i=1;i<=k;i++){
        cin>>ar[i];
    }

    for(int i=1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        vt[u].push_back(v);
        vt[v].push_back(u);
    }

    
    for(int i=1;i<=k;i++){
        int s=0;
        dfs(ar[i],s);
        gv.push_back(s);
        gn+=s;
    }

    sort(gv.begin(),gv.end());

    int fn=n-gn;
    gv.back()+=fn;

    int ans=0;
    for(int i:gv){
        ans+=(i*(i-1))/2;
    }

    cout<<ans-m<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
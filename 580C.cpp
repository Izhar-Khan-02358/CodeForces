#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

int u=0;
int c=0;
int m=0;
const int N=2*(1e5)+1;
vector<int>vt[N];
vector<int>ar(N);
void dfs(int v, int p, int c){
    if(ar[v]==1){
        c++;
    }else{
        c=0;
    }

    if(c>m){
        return;
    }

    int l=0;
    for(auto x:vt[v]){
        if(x==p) continue;
        l=1;
        dfs(x,v,c);
    }
    
    if(l==0){
        u++;
    }
}

void solve() {
    int n;
    cin>>n>>m;
    
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }

    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        vt[u].push_back(v);
        vt[v].push_back(u);
    }

    dfs(1,0,0);
    
    cout<<u<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=(1e3)+1;
vector<int>vt[N];
vector<int>vis(N);
int f=0;
void dfs(int v,int &f){
    if(!vis[v]){
        vis[v]=1;
        f++;
    }

    for(auto x:vt[v]){
        if(vis[x]) continue;
        dfs(x,f);
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
    }

    if(n!=m){
        cout<<"NO"<<endl;
        return;
    }
    dfs(1,f);
    if(f!=n){
        cout<<"NO"<<endl;
    }else{
        cout<<"FHTAGN!"<<endl;
    }
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
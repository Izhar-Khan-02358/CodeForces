#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=(1e4)+1;
vector<int>vt[N];
vector<int>ar(N);
vector<int>cr(N);

pair<int,int> dfs(int v, int&a,int d){
    for(auto x:vt[v]){
        a=min(ar[x],a);
        return dfs(x,a,x);
    }
    return {d,a};
}
void solve() {
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        vt[u].push_back(v);
        ar[v]=w;
        cr[v]++;
    }

    vector<int>br;
    for(int i=1;i<=n;i++){
        if(vt[i].size()==1 && cr[i]==0){
            br.push_back(i);
        }
    }

    if(br.size()==0){
        cout<<0<<endl;
        return;
    }

    cout<<br.size()<<endl;

    for(auto x:br){
        int a=LLONG_MAX;
        auto y=dfs(x,a,-1);
        cout<<x<<" "<<y.first<<" "<<y.second<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
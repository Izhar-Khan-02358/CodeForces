#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=(1e5)+1;


void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>ar(n+1);
    vector<pair<int,int>>vt;
    vector<int>dg(n+1);
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }

    for(int i=1;i<=m;i++){
        int u,v;
        cin>>u>>v;

        vt.push_back({u,v});

        dg[u]++;
        dg[v]++;
    }

    if(!(m%2)){
        cout<<0<<endl;
        return;
    }

    int a=LLONG_MAX;

    for(int i=1;i<=n;i++){
        if(dg[i]%2){
            a=min(a,ar[i]);
        }
    }

    for(auto x:vt){
        int u=x.first;
        int v=x.second;

        if(dg[u]%2==0 && dg[v]%2==0){
            a=min(a,ar[u]+ar[v]);
        }
    }

    cout<<a<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<vector<int>>g(n+1);
    vector<int>d(n+1,0);

    for(int i=0;i<n-1;i++){
        int u,v;cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
        d[u]++;d[v]++;
    }

    if(n==2){
        cout<<0<<endl;
        return;
    }

    vector<pair<int,int>>dg;
    for(int i=1;i<=n;i++){
        dg.push_back({i,d[i]});
    }

    sort(dg.begin(), dg.end(), [](auto &a, auto &b){return a.second>b.second;});

    for(int i=1;i<=n;i++){
        sort(g[i].begin(),g[i].end());
    }

    int m=0;

    for(int i=0;i<n;i++){
        int u=dg[i].first;
        for(int j=i+1;j<n;j++){
            int v=dg[j].first;

            bool h=binary_search(g[u].begin(),g[u].end(),v);

            if(h){
                m=max(m,d[u]+d[v]-2);
            }else{
                m=max(m,d[u]+d[v]-1);
                break;
            }
        }
    }

    cout<<m<<endl;
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
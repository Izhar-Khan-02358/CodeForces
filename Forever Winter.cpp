#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=200+1;
vector<int>vt[N];

void solve() {
    int n,m;
    cin>>n>>m;
    
    for(int i=1;i<=n;i++){
        vt[i].clear();
    }

    for(int i=1;i<=m;i++){
        int u,v;
        cin>>u>>v;

        vt[u].push_back(v);
        vt[v].push_back(u);
    }

    int y=0;
    for(int i=1;i<=n;i++){
        if(vt[i].size()==1){
            int p=vt[i][0];
            y=vt[p].size()-1;
            break;
        }
    }
    
    int x=(n-1)/(y+1);

    cout<<x<<" "<<y<<endl;
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
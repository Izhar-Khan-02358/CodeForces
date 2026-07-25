#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+5;

void solve() {
    int n,m;
    cin>>n>>m;
    vector<set<int>>ar(n+1);
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        ar[u].insert(v);
        ar[v].insert(u);
    }

    int g=0;

    while(true){
        vector<int>w;

        for(int i=1;i<=n;i++){
            if(ar[i].size()==1){
                w.push_back(i);
            }
        }

        if(w.empty()){
            break;
        }

        for(int x:w){
            if(ar[x].empty()){
                continue;
            }
            int r=*ar[x].begin();
            ar[r].erase(x);
            ar[x].erase(r);
        }

        g++;
    }

    cout<<g<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
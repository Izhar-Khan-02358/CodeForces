#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;
vector<int>vt[N];
vector<int>ans[N];

void dfs(int p, int c){
    ans[p].push_back(c);
    
    bool first = true;
    for (int child : vt[c]) {
        if (first) {
            dfs(p, child); 
            first = false;
        } else {
            dfs(child, child); 
        }
    }
}

void solve() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        vt[i].clear();
        ans[i].clear();
    }

    int r=0;
    vector<int>ar(n+1);
    for(int i=1;i<=n;i++){
        cin>>ar[i];

        if(ar[i]==i) r=i;

        if(ar[i]!=i){
            vt[ar[i]].push_back(i);
        }
    }

        dfs(r,r);

    int path_count=0;
    for(int i=1;i<=n;i++){
        if(!ans[i].empty()){
            path_count++;
        }
    }

    cout<<path_count<<endl;

    for(int i=1;i<=n;i++){
        if(!ans[i].empty()){
            cout<<ans[i].size()<<endl;
            for(auto x:ans[i]){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    cout<<endl;
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
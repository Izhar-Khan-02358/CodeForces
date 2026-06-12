#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n+1);
    vector<int>br(n+1);
    for(int i=1;i<=n;i++){
        int u;cin>>u;
        if(u<=n){
            ar[u]++;
        }
    }

    int u=0;
    for(int i=1;i<=n;i++){
        if(ar[i]>0){
            for(int j=i;j<=n;j+=i){
                br[j]+=ar[i];
            }
        }
    }

    for(int i=1;i<=n;i++){
        u=max(u,br[i]);
    }
    cout<<u<<endl;
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
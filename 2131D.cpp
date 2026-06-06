#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>vt[n+1];
    vector<int>count(n+1);
    for(int i=1;i<=n-1;i++){
        int u,v;cin>>u>>v;

        vt[u].push_back(v);
        vt[v].push_back(u);
        count[u]++;
        count[v]++;
    }

    if(n==2 or n==3){
        cout<<0<<endl;
        return;
    }

    int m=0;
    int c=0;
    int ans=0;
    for(int i=1;i<=n;i++){
        int h=0;
        for(int x:vt[i]){
            if(vt[x].size()==1){
                h++;
            }
        }

        m=max(m,h);

        if(count[i]==1){
            ans++;
        }
    }

    cout<<ans-m<<endl;

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
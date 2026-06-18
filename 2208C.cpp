#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=(1e5)+1;
ld dp[N];

ld kla(int i,vector<pair<ld,ld>>&ar){
    if(i==ar.size()) return 0;

    if(dp[i]!=-1) return dp[i];

    ld h=kla(i+1,ar);

    ld g=kla(i+1,ar)*(1-(ar[i].second)/100)+ar[i].first;

    return dp[i]=max(h,g);
}

void solve() {
    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
        dp[i]=-1.0;
    }

    vector<pair<ld,ld>>ar;
    for(int i=1;i<=n;i++){
        ld u,v;cin>>u>>v;
        ar.push_back({u,v});
    }

    cout<<fixed<<setprecision(6)<<kla(0,ar)<<endl;
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
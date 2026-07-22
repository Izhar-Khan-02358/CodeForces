#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,q;
    cin>>n>>q;
    vector<pair<int,int>>ar(n);
    for(int i=0;i<n;i++){
        int u;cin>>u;
        ar[i].first=u;
        ar[i].second=i;
    }

    sort(ar.begin(),ar.end());

    int u=0;

    for(int i=0;i<n;i++){
        u=max(u,ar[i].second^i);
    }

    if(u==0){
        cout<<0<<endl;
    }else{
        int p=63-__builtin_clzll(u);
        cout<<(1LL<<p)<<endl;
    }
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
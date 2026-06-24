#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,m;
    cin>>n>>m;

    int l=max(0LL,n-m);
    int r=n+m;

    if(l==r){
        cout<<l<<endl;
        return;
    }

    int x=l^r;
    int u=63-__builtin_clzll(x);

    int h=(1LL<<(u+1))-1;

    cout<<(l|h)<<endl;
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
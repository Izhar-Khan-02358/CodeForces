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
    int mx=LLONG_MIN,mn=LLONG_MAX;
    for(int i=1;i<=n;i++){
        cin>>ar[i];

        mn=min(mn,ar[i]);
        mx=max(mx,ar[i]);
    }

    cout<<mx-mn+1<<endl;
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
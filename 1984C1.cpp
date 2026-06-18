#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'


void solve() {
    int n;
    cin>>n;
    int mx=0,mn=0;
    vector<int>ar(n+1);
    for(int i=0;i<n;i++){
        cin>>ar[i];

        int u=mn+ar[i];
        int v=max(abs(mx+ar[i]),abs(mn+ar[i]));

        mn=u;
        mx=v;
    }

    cout<<mx<<endl;
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
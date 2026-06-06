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
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }

    sort(ar.begin(),ar.end());
    vector<int>p(n+1);
    p[0]=0;
    for(int i=1;i<=n;i++){
        p[i]=p[i-1]+ar[i];
    }

    int ans=ar[n];
    for(int i=2;i<=n;i++){
        ans+=(p[i]-i*ar[i]);
    }
    cout<<ans<<endl;
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
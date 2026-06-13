#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,a,b;
    cin>>n>>a>>b;
    vector<int>ar(n+1);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    int g=__gcd(a,b);
    vector<int>vt(n,0);
    for(int i =0;i<n;i++){
        vt[i]=ar[i]%g;
    }

    sort(vt.begin(),vt.end());

    int u=vt.back()-vt.front();
    for(int i=0;i<n-1;i++){
        int h=(vt[i]+g)-vt[i+1];
        u=min(u,h);
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
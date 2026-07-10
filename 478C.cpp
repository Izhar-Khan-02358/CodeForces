#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int r,g,b;
    cin>>r>>g>>b;

    int s=r+g+b;
    int m=max({r,g,b});

    cout<<min(s/3,s-m)<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
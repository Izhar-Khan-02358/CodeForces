#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,x,y,z;
    cin>>n>>x>>y>>z;

    int u=0,v=0;
    u=(n+x+y-1)/(x+y);

    if(z*x>=n){
        v=(n+x-1)/x;
    }else{
        int p=n-z*x;
        int q=x+y*10;
        int w=(p+q-1)/q;
        v=z+w;
    }
    cout<<min(u,v)<<endl;
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
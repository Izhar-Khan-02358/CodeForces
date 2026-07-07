#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,m;
    cin>>n>>m;

    if(n%m==0){
        cout<<0<<endl;
        return;
    }

    int g=__gcd(n,m);

    int h=m/g;

    int b=__builtin_popcountll(h);

    if(b>1){
        cout<<-1<<endl;
        return;
    }

    int a=0;
    int u=n%m;
    while(u>0){
        a+=u;
        u*=2;
        u%=m;
    }

    cout<<a<<endl;
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
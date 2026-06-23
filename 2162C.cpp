#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int a,b;cin>>a>>b;

    if(a==b){
        cout<<0<<endl;
        return;
    }

    int ma=63-__builtin_clzll(a);
    int mb=63-__builtin_clzll(b);

    if(mb>ma){
        cout<<-1<<endl;
        return;
    }

    int d=a^b;

    if(d<=a){
        cout<<1<<endl;
        cout<<d<<endl;
    }else{
        int u=1LL<<ma;

        int p=d^u;
        int q=u;
        cout<<2<<endl;
        cout<<p<<" "<<q<<endl;
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
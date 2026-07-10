#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,k;
    cin>>n>>k;
    
    int a=0;
    int p=1;

    while(n>=p){
        int h=min(k,n/p);
        if(h==0) break;

        a+=h;
        n-=(h*p);
        p*=2;
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
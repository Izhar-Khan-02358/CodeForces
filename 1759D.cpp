#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,m;
    cin>>n>>m;

    int u=n;
    int ct=0;
    int cf=0;
    int k=1;

    while(u%2==0){
        u/=2;
        ct++;
    }

    while(u%5==0){
        u/=5;
        cf++;
    }

    while(ct<cf && k*2<=m){
        k*=2;
        ct++;
    }

    while(cf<ct && k*5<=m){
        k*=5;
        cf++;
    }

    while(k*10<=m){
        k*=10;
    }

    k*=(m/k);

    cout<<n*k<<endl;
    
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
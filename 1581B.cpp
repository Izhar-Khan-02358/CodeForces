#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,m,k;
    cin>>n>>m>>k;

    int u=((n)*(n-1))/2;

    if(m<n-1){
        cout<<"NO"<<endl;
        return;
    }

    if(k<2){
        cout<<"NO"<<endl;
        return;
    }

    if(m>u){
        cout<<"NO"<<endl;
        return;
    }

    if(k==2 && n>1){
        cout<<"NO"<<endl;
        return;
    }

    if(k==3 && m<u){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
    
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
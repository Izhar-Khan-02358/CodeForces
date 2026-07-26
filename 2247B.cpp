#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+5;

void solve() {
    int n,k,m;
    cin>>n>>k>>m;

    if(k>m){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
    for(int i=0;i<k-1;i++){
        cout<<1<<" ";
    }

    cout<<m-k+1<<" ";

    for(int i=0;i<n-k;i++){
        cout<<1<<" ";
    }cout<<endl;
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
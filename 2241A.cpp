#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int x,y;cin>>x>>y;

    if(x<y){
        cout<<"NO"<<endl;
        return;
    }

    if(x%y==0){
        cout<<"YES"<<endl;
        return;
    }

    cout<<"NO"<<endl;
    
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
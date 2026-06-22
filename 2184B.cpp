#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int s,k,m;
    cin>>s>>k>>m;

    if(k>=s){
        int u=m%k;
        cout<<max(0LL,s-u)<<endl;
        return;
    }  

    if(s>k){
        int f=m/k;
        int u=m%k;

        if(f%2){
            cout<<k-u<<endl;
            return;
        }else{
            cout<<s-u<<endl;
            return;
        }
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
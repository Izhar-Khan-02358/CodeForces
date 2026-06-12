#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,m,k;
    cin>>n>>m>>k;

    if(k==1){
        cout<<1<<endl;
        return;
    }

    if(k==2){
        if(m<=n){
            cout<<m<<endl;
            return;
        }else{
            int u=floor((m-n)/n);
            cout<<n+u<<endl;
            return;
        }
    }

    if(k==3){
        if(m<=n){
            cout<<0<<endl;
            return;
        }else{
            int u=floor((m-n)/n);
            cout<<m-n-u<<endl;
            return;
        }
    }

    if(k>3){
        cout<<0<<endl;
        return;
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
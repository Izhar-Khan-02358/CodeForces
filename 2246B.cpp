#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    
    if(n==1){
        cout<<1<<endl;
        return;
    }

    if(n==2){
        cout<<-1<<endl;
        return;
    }

    if(n==3){
        cout<<1<<" "<<2<<" "<<3<<endl;
        return;
    }

    cout<<1<<" "<<2<<" "<<6<<" "<<9<<" ";
    int u=9;
    for(int i=5;i<=n;i++){
        u*=2;
        cout<<u<<" ";
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
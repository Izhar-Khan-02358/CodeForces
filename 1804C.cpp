#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,x,p;
    cin>>n>>x>>p;

    int r=(n-x)%n;

    int l=min(p,2*n);
    for(int i=1;i<=l;i++){
        int d=(((i)*(i+1))/2)%n;

        if(d==r){
            cout<<"YES"<<endl;
            return;
        }
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
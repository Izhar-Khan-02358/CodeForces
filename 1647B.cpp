#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,m;
    cin>>n>>m;
    vector<string>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            int ct=(ar[i][j]-'0')+(ar[i+1][j]-'0')+(ar[i][j+1]-'0')+(ar[i+1][j+1]-'0');

            if(ct==3){
                cout<<"NO"<<endl;
                return;
            }
        }
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
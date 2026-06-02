#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

void solve() {
    int n,m;cin>>n>>m;

    if(m%2){
        for(int i=1;i<=n;i++){
            if(i!=n){
                cout<<n<<" ";
            }else{
                cout<<n-1<<endl;
            }
        }
    }else{
        for(int i=1;i<=n;i++){
            if(i!=(n-1)){
                cout<<n-1<<" ";
            }else{
                cout<<n<<" ";
            }
        }cout<<endl;
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
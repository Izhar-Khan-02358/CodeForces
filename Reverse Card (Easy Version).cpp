#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

void solve() {
    int n,m;cin>>n>>m;

    int ans=0;

    for(int i=1;i<=m;i++){
        if(i==1){
            ans+=n;
        }else{
            int u=(n+i)/(i*i);

            if(u==0){
                break;
            }

            ans+=u;
        }
    }

    cout<<ans<<endl;

    
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
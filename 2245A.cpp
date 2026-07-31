#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'
#define sorta(v) sort((v).begin(), (v).end())
#define sortd(v) sort((v).rbegin(), (v).rend())

const int N=2*(1e5)+5;

void solve() {
    int n,k;
    cin>>n>>k;
    string s;cin>>s;

    if(n<2*k){
        cout<<"-1"<<endl;;
        return;
    }
    int ans=0;
    for(int i=0;i<k;i++){
        if(s[i]=='L'){
            ans++;
        }
    }
    for(int i=n-k;i<n;i++){
        if(s[i]=='R'){
            ans++;
        }
    }
    cout<<ans<<endl;;

    
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
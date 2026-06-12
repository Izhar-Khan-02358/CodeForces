#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n+1);
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }

    vector<int>br(n+2);
    br[1]=ar[1];
    br[n+1]=ar[n];
    for(int i=1;i<=n-1;i++){
        int u=__gcd(ar[i],ar[i+1]);
        int g=(ar[i]/u)*ar[i+1];
        br[i+1]=g;
    }

    int u=0;
    for(int i=1;i<=n-1;i++){
        if(__gcd(br[i],br[i+1])!=ar[i]){
            u=1;
            break;
        }
    }

    if(u){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
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
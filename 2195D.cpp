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

    vector<int>br(n+1);
    for(int i=2;i<n;i++){
        int u=(ar[i-1]+ar[i+1]-2*ar[i])/2;
        br[i]=u;
    }

    int s=(ar[1]+ar[n])/(n-1);
    br[1]=(-ar[1]+ar[2]+s)/2;
    br[n]=(s-ar[n]+ar[n-1])/2;

    for(int i=1;i<=n;i++){
        cout<<br[i]<<" ";
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
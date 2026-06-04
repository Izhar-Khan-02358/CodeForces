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

    vector<int>mn(n+1);
    vector<int>mx(n+1);

    mx[1]=ar[1];
    mn[n]=ar[n];

    for(int i=2;i<=n;i++){
        mx[i]=max(mx[i-1],ar[i]);
    }

    for(int i=n-1;i>=1;i--){
        mn[i]=min(mn[i+1],ar[i]);
    }

    int ans=1;
    for(int i=1;i<=n-1;i++){
        if(mx[i]!=mx[i+1]){
            if(mx[i]<mn[i+1]){
                ans++;
            }
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
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+5;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n+1);
    int mn=LLONG_MAX;
    int mx=LLONG_MIN;
    for(int i=1;i<=n;i++){
        cin>>ar[i];

        if(i%2){
            mn=min(mn,ar[i]);
        }else{
            mx=max(mx,ar[i]);
        }
        
    }

    if(n%2){
        cout<<"NO"<<endl;
        return;
    }

    if(mx+1>=mn){
        cout<<"NO"<<endl;
        return;
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
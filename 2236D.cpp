#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>ar(n+1);

    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }

    sort(ar.begin(),ar.end());
    vector<int>v(n+1);
    for(int i=1;i<=n;i++){
        v[ar[i]]++;
    }

    for(int i=1;i<=n;i++){
        if(v[i]%2==0 && v[i]!=0){
            cout<<"YES"<<endl;
            return;
        }
    }

    ar.erase(unique(ar.begin(),ar.end()),ar.end());

    for(int i=1;i<ar.size()-1;i++){
        if(ar[i+1]-ar[i]<=k){
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
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    int ct=0;
    int ch=ar[k-1];
    sort(ar.begin(),ar.end());
    ar.erase(unique(ar.begin(),ar.end()),ar.end());

    int m=ar.back();
    
    while(ch<m){
        int r=2*ch-ct;
        auto i=upper_bound(ar.begin(),ar.end(),r);
        i--;
        int u=*i;
        if(u<=ch){
            cout<<"NO"<<endl;
            return;
        }

        ct+=(u-ch);
        ch=u;
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
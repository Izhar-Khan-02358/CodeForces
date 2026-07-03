#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,x,y;
    cin>>n>>x>>y;
    vector<int>ar(n);
    int s=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        s+=ar[i];
    }

    sort(ar.begin(),ar.end());

    int u=0;
    for(int i=0;i<n-1;i++){
        int l=s-y-ar[i];
        int r=s-x-ar[i];

        auto p=lower_bound(ar.begin()+i+1,ar.end(),l);
        auto q=upper_bound(ar.begin()+i+1,ar.end(),r);

        u+=(q-p);
    }

    cout<<u<<endl;
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
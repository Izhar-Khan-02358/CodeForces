#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

void solve() {
    int n,m;cin>>n>>m;

    vector<pair<int,int>>mp;
    map<int,int>x;
    vector<int>ar;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        mp.push_back({v,u});
        x[u]=i+1;
    }

    sort(mp.begin(),mp.end());

     int sum=0;
    for(int i=0;i<2*n;i++){
        sum+=mp[i].first;
    }

    cout<<sum<<endl;
    for(int i=0;i<2*n;i++){
        ar.push_back(mp[i].second);
    }

    sort(ar.begin(),ar.end());

    for(int i=0;i<n;i++){
        cout<<x[ar[i]]<<" "<<x[ar[2*n-1-i]]<<endl;
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
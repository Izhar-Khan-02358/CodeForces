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
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        cin>>ar[i];

        int u=ar[i]%k;
        if(u){
            int r=k-u;
            mp[r]++;
        }
    }

    if(mp.empty()){
        cout<<0<<endl;
        return;
    }

    int u=0;
    for(auto x:mp){
        int a=x.first;
        int b=x.second;

        int h=a+(b-1)*k;
        u=max(h,u);
    }
    
    cout<<u+1<<endl;
    
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
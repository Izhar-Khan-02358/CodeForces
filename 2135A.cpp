#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

int dyp(int i,vector<vector<int>>&v,vector<int>&ar,vector<int>&dp){

    if(i==ar.size()) return 0;
    if(dp[i]!=-1) return dp[i];

    int h=dyp(i+1,v,ar,dp);
    
    int x=ar[i];

    if(x<=ar.size()){
        int u=lower_bound(v[x].begin(),v[x].end(),i)-v[x].begin();

        if(u+x-1<v[x].size()){
            int id=v[x][u+x-1];

            h=max(h,dyp(id+1,v,ar,dp)+x);
        }
    }

    return dp[i]=h;
}

void solve(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    vector<int>ar(n);
    vector<vector<int>>v(n+1);
    for(int i=0;i<n;i++){
        cin>>ar[i];

        if(ar[i]<=n) {
            v[ar[i]].push_back(i);
        }
    }

    cout<<dyp(0,v,ar,dp)<<endl;
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
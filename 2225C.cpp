#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

int kla(int i, string &a,string &b,vector<int>&dp){
    if(i>=a.length()) return 0;

    if(dp[i]!=-1) return dp[i];

    int h=LLONG_MAX;

    h=kla(i+1,a,b,dp)+(a[i]==b[i]?0:1);

    if(i+1<a.length()){
        h=min(h,((a[i]==a[i+1]?0:1)+(b[i]==b[i+1]?0:1)+kla(i+2,a,b,dp)));
    }

    return dp[i]=h;
}

void solve() {
    int n;
    cin>>n;
    vector<int>dp(n);
    for(int i=0;i<n;i++){
        dp[i]=-1;
    }

    string a,b;
    cin>>a>>b;

    cout<<kla(0,a,b,dp)<<endl;
    
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
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;
int dp[N];

int lis(int i,vector<int>&ar){
    if(i<0) return 0;

    if(dp[i]!=-1) return dp[i];

    int li=lis(i-1,ar);

    int ti=0;
    
    int j=upper_bound(ar.begin(),ar.begin()+i,ar[i]-2)-ar.begin()-1;

    ti=1+lis(j,ar);

    return dp[i]=max(ti,li);
}

void solve() {
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        dp[i]=-1;
    }

    vector<int>ar(n+1);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    cout<<lis(n-1,ar)<<endl;
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
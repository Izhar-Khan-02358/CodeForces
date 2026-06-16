#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=3*(1e5)+1;
int dp[N][7];
int mec(int i,int pf,vector<int>&ar){
    if(i==ar.size()) return 0;
    if(dp[i][pf]!=-1){
        return dp[i][pf];
    }
    int mn=LLONG_MAX;
    for(int j=1;j<=6;j++){
        if(pf!=0){
            if(j==pf or j+pf==7){
                continue;
            }
        }

        int c=(ar[i]==j)?0:1;

        int tc=c+mec(i+1,j,ar);
        mn=min(mn,tc);
    }

    return dp[i][pf]=mn;
}

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=6;j++){
            dp[i][j]=-1;
        }
    }

    cout<<mec(0,0,ar)<<endl;
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
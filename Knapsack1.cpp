#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=(1e5)+1;
int dp[101][N];
int lis(int i,int w,vector<pair<int,int>>&ar){
    if(i==ar.size()) return 0;
    if(dp[i][w]!=-1) return dp[i][w];

    int h=LLONG_MIN;

    h=lis(i+1,w,ar);

    if(w-ar[i].first>=0){
        h=max(h,lis(i+1,w-(ar[i].first),ar)+ar[i].second);
    }

    return dp[i][w]=h;
}

void solve() {
    int n,w;
    cin>>n>>w;

    for(int i=0;i<n;i++){
        for(int j=0;j<=w;j++){
            dp[i][j]=-1;
        }
    }
    
    vector<pair<int,int>>ar;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        ar.push_back({a,b});
    }

    cout<<lis(0,w,ar)<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
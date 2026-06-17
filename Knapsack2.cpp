#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=(1e5)+1;
int dp[101][N];

int kla(int i,int v, vector<pair<int,int>>&ar){
    if(v==0) return 0;
    if(i==ar.size()) return 1e15;
    
    if(dp[i][v]!=-1) return dp[i][v];
    
    int h=LLONG_MAX;

    h=kla(i+1,v,ar);

    if(v-ar[i].second>=0){
        h=min(h,kla(i+1,v-ar[i].second,ar)+ar[i].first);
    }

    return dp[i][v]=h;
}

void solve() {
    int n,w;
    cin>>n>>w;

    for(int i=0;i<n;i++){
        for(int j=0;j<=N;j++){
            dp[i][j]=-1;
        }
    }

    vector<pair<int,int>>ar;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        ar.push_back({a,b});
    }

    for(int i=N;i>=1;i--){
        int u=kla(0,i,ar);

        if(u<=w){
            cout<<i<<endl;
            return;
        }
    }

    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
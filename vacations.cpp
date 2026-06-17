#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=(1e5)+1;
int dp[N][4];

int vac(int i,int c,vector<vector<int>>&ar){
    if(i==ar.size()) return 0;
    if(dp[i][c]!=-1) return dp[i][c];
    int h=LLONG_MIN;
    for(int j=0;j<3;j++){
        if(j!=c){
            h=max(vac(i+1,j,ar)+ar[i][j],h);
        }
    }

    return dp[i][c]=h;
}

void solve() {
    int n;
    cin>>n;
    vector<vector<int>>ar(n);

    for(int i=0;i<n;i++){
        for(int j=0;j<=3;j++){
            dp[i][j]=-1;
        }
    }
    for(int i=0;i<n;i++){
        int u,v,w;
        cin>>u>>v>>w;

        ar[i].push_back(u);
        ar[i].push_back(v);
        ar[i].push_back(w);
    }

    cout<<vac(0,3,ar)<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
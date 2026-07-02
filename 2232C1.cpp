#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

int kla(int i,int j,int n,int x,int s,string& f,vector<vector<int>>&dp){
    if(j<0 or j>x) return LLONG_MIN;

    if(i==0){
        if(j==x) return 0;
        return LLONG_MIN;
    }

    if(dp[i][j]!=-1) return dp[i][j];

    int m=LLONG_MIN;
    char p=f[i-1];

    int h=kla(i-1,j,n,x,s,f,dp);
    if(h!=LLONG_MIN){
        m=max(h,m);
    }

    if(p=='I' or p=='A'){
        int r=kla(i-1,j+1,n,x,s,f,dp);
        if(r!=LLONG_MIN){
            m=max(m,r+1);
        }
    }

    if(p=='E' or p=='A'){
        int r=kla(i-1,j,n,x,s,f,dp);
        if(r!=LLONG_MIN){
            int os=(x-j)*s-r;
            if(os>0){
                m=max(m,r+1);
            }
        }
    }

    return dp[i][j]=m;
}

void solve() {
    int n,x,s;
    cin>>n>>x>>s;
    
    string f;cin>>f;

    vector<vector<int>>dp(n+1,vector<int>(x+1,-1));

    int u=0;

    for(int i=0;i<=x;i++){
        u=max(u,kla(n,i,n,x,s,f,dp));
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
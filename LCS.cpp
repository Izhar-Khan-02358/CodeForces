#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=3001;
int dp[N][N];
string s,t,a;
int lcs(int i,int j){
    if(i<0 or j<0) return 0;

    if(dp[i][j]!=-1) return dp[i][j];
    int u=0,v=0,w=0;

    if(s[i]==t[j]){
        u=max(u,lcs(i-1,j-1)+1);
    }else{
        v=lcs(i-1,j);
        w=lcs(i,j-1);
    }

    return dp[i][j]=max({u,v,w});
}

void solve() {
    cin>>s>>t;

    for(int i=0;i<=s.length();i++){
        for(int j=0;j<=t.length();j++){
            dp[i][j]=-1;
        }
    }

    int i=s.length()-1;
    int j=t.length()-1;

    lcs(i,j);

    while(i>=0 && j>=0){
        if(s[i]==t[j]){
            a+=s[i];
            i--;
            j--;
        }else if(lcs(i-1,j)>=lcs(i,j-1)){
            i--;
        }else{
            j--;
        }

    }

    reverse(a.begin(),a.end());
    cout<<a<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
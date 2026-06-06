#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,m;
    cin>>n>>m;
    vector<string>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    vector<vector<int>>dg(n,vector<int>(m,0));
    queue<pair<int,int>>q;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ar[i][j]=='?'){
                dg[i][j]=4;
                if(i==0) dg[i][j]--;
                if(i==n-1) dg[i][j]--;
                if(j==0) dg[i][j]--;
                if(j==m-1) dg[i][j]--;
            }else{
                dg[i][j]=1;
                if(ar[i][j]=='U' && i==0) dg[i][j]--;
                if(ar[i][j]=='D' && i==n-1) dg[i][j]--;
                if(ar[i][j]=='L' && j==0) dg[i][j]--;
                if(ar[i][j]=='R' && j==m-1) dg[i][j]--;
            }

            if(dg[i][j]==0) q.push({i,j});
        }
    }

    int u=0;
    while(!q.empty()){
        int r=q.front().first;
        int c=q.front().second;
        q.pop();
        u++;

        if(r>0 &&(ar[r-1][c]=='?' or ar[r-1][c]=='D')){
            if(dg[r-1][c]>0){
                dg[r-1][c]--;
                if(dg[r-1][c]==0) q.push({r-1,c});
            }
        }
        
        if(r<n-1 &&(ar[r+1][c]=='?' or ar[r+1][c]=='U')){
            if(dg[r+1][c]>0){
                dg[r+1][c]--;
                if(dg[r+1][c]==0) q.push({r+1,c});
            }
        }

        if(c>0 &&(ar[r][c-1]=='?' or ar[r][c-1]=='R')){
            if(dg[r][c-1]>0){
                dg[r][c-1]--;
                if(dg[r][c-1]==0) q.push({r,c-1});
            }
        }

        if(c<m-1 &&(ar[r][c+1]=='?' or ar[r][c+1]=='L')){
            if(dg[r][c+1]>0){
                dg[r][c+1]--;
                if(dg[r][c+1]==0) q.push({r,c+1});
            }
        }
    }

    cout<<n*m-u<<endl;

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
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+5;

void dfs(int v,vector<vector<int>>&ar,vector<int>&vis,int c,int &c0,int &c1,bool &f){
    vis[v]=c;
    if(c==0) c0++;
    else c1++;

    for(int child:ar[v]){
        if(vis[child]==-1){
            dfs(child,ar,vis,1-c,c0,c1,f);
        }else if(vis[child]==vis[v]){
            f=false;
        }
    }
}

int kla(int v,vector<vector<int>>&ar,vector<int>&vis){
    int c0=0;
    int c1=0;
    bool f=true;

    dfs(v,ar,vis,0,c0,c1,f);

    if(f){
        return max(c0,c1);
    }else{
        return 0;
    }
}

void solve() {
    int n,k;
    cin>>n>>k;
    vector<vector<int>>ar(n+1);
    vector<int>vis(n+1,-1);
    for(int i=0;i<k;i++){
        int u,v;cin>>u>>v;
        ar[u].push_back(v);
        ar[v].push_back(u);
    }

    int u=0;
    for(int i=1;i<=n;i++){
        if(vis[i]==-1){
            if(ar[i].size()==0){
                u++;
                vis[i]=0;
                continue;
            }else{
                u+=kla(i,ar,vis);
            }
            
        }
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
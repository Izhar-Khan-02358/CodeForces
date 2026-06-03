#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;
vector<int>v[N];
vector<int>dis(N,0);
vector<int>vis(N,0);

void bfs(int s){
    queue<int>q;
    q.push(s);
    vis[s]=1;

    while(!q.empty()){
        int cv=q.front();
        q.pop();

        for(int child:v[cv]){
            if(!vis[child]){
                q.push(child);
                vis[child]=1;
                dis[child]=dis[cv]+1;
            }
        }
    }

}

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>ar(n+1);
    vector<int>br(k+1,0);
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }

    for(int i=0;i<m;i++){
        int u,r;
        cin>>u>>r;

        v[u].push_back(r);
        v[r].push_back(u);
    }

    bfs(1);


    for(int i=1;i<=n;i++){
        int u=ar[i];
        int d=dis[i];
        if(d>br[u]){
            br[u]=d;
        }
    }

    for(int i=1;i<=k;i++){
        cout<<br[i]<<" ";
    }cout<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
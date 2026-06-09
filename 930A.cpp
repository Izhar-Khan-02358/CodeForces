#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=(1e5)+1;
vector<int>vt[N];
vector<int>vis(N);
vector<int>lv(N);

void bfs(int s){
    queue<int>q;
    q.push(s);
    vis[s]=1;
    lv[s]=1;
    while(!q.empty()){
        int v=q.front();
        q.pop();

        for(int x:vt[v]){
            if(!vis[x]){
                q.push(x);
                vis[x]=1;
                lv[x]=lv[v]+1;
            }
        }
    }
}

void solve() {
    int n;
    cin>>n;
    
    for(int i=2;i<=n;i++){
        int u;cin>>u;
        vt[u].push_back(i);
        vt[i].push_back(u);
    }

    bfs(1);

    vector<int>l(n+1);
    for(int i=1;i<=n;i++){
        l[lv[i]]++;
    }

    int u=0;
    for(int x:l){
        u+=(x%2);
    }

    cout<<u<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
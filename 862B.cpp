#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;
vector<int>vt[N+1];
vector<int>vis(N+1);
vector<char>lev(N+1);
int a=0;

int bfs(int v){
    queue<int>q;
    q.push(v);
    vis[v]=1;
    lev[v]='a';
    a++;

    while(!q.empty()){
        int cv=q.front();
        q.pop();

        for(int x:vt[cv]){
            if(!vis[x]){
                q.push(x);
                vis[x]=1;
                lev[x]=((lev[cv]=='a')?'b':'a');
                if(lev[x]=='a'){
                    a++;
                }
            }
        }
    }

    return a;
}

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n+1);
    
    for(int i=1;i<=n-1;i++){
        int u,v;
        cin>>u>>v;
        vt[u].push_back(v);
        vt[v].push_back(u);
    }


    int ca=bfs(1);
    int cb=n-ca;

    int ans=(ca*cb)-n+1;
    cout<<ans<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
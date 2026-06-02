#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*1e5+1;
map<int,char>mp;
vector<int>v[N];
vector<int>vis(N);
vector<int>g(N);
vector<int> current_cycle;
int ans=0;

void dsu(int u, char c){
    vis[u]=1;
    current_cycle.push_back(u);
    if(c=='0'){
        ans++;
    }

    for(int child:v[u]){
        if(!vis[child])dsu(child,mp[child]);
    }

}


void solve() {
    int n;
    cin>>n;
    string s;
    vector<int>ar(n+1);
    for(int i=1; i<=n; i++){
        v[i].clear();
        vis[i] = 0;
        g[i] = 0;
    }
    mp.clear();
    ans=0;


    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }

    cin>>s;

    for(int i=1;i<=n;i++){
        v[i].push_back(ar[i]);
        mp[ar[i]]=s[i-1];
    }

    for(int i=1;i<=n;i++){
        if(vis[i]) continue;

        ans=0;
        current_cycle.clear();

        dsu(i,mp[i]);

        for(int x:current_cycle){
            g[x]=ans;
        }
    }

    for(int i=1;i<=n;i++){
        cout<<g[i]<<" ";
    }cout<<endl;

    
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
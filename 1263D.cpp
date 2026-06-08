#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

vector<int>vt[26];
bool act[26]={false};
bool vis[26]={false};

void dfs(int v){
    vis[v]=true;
    for(int child:vt[v]){
        if(!vis[child]){
            dfs(child);
        }
    }
}
void solve() {
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        string s;
        cin>>s;

        for(char c:s){
            act[c-'a']=true;
        }

        int v=s[0]-'a';
        for(int j=1;j<s.length();j++){
            int u=s[j]-'a';

            vt[v].push_back(u);
            vt[u].push_back(v);
        }
    }

    int ans=0;
    for(int i=0;i<26;i++){
        if(act[i] && !vis[i]){
            dfs(i);
            ans++;
        }
    }

    cout<<ans<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
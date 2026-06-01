#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2001;
vector<int>vt[N];
int dfs(int v){
    int ans=0;
    for(auto x:vt[v]){
        
        ans=max(ans,dfs(x));
    }

    return 1+ans;
}

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n+1);
    vector<int>roots;
    for(int i=1;i<=n;i++){
        cin>>ar[i];
        if(ar[i]!=-1){
            vt[ar[i]].push_back(i);
        }else{
            roots.push_back(i);
        }
    }

    int u=0;
    for(auto x:roots){
        u=max(u,dfs(x));
    }

    cout<<u<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
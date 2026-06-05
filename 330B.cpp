#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>ar(n+1);
    for(int i=1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        ar[u]=1;
        ar[v]=1;
    }

    int c=0;
    for(int i=1;i<=n;i++){
        if(ar[i]==0){
            c=i;
            break;
        }
    }

    cout<<n-1<<endl;
    for(int i=1;i<=n;i++){
        if(i!=c){
            cout<<c<<" "<<i<<endl;
        }
    }

    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
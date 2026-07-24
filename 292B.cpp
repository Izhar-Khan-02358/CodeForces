#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>d(n+1);
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;

        d[u]++;
        d[v]++;
    }

    int p=0,q=0,r=0;

    for(int i=1;i<=n;i++){
        if(d[i]==1){
            p++;
        }else if(d[i]==2){
            q++;
        }else if(d[i]==n-1){
            r++;
        }
    }

    if(m==n-1 && p==2 && q==n-2){
        cout<<"bus topology"<<endl;
    }else if(m==n && q==n){
        cout<<"ring topology"<<endl;
    }else if(m==n-1 && p==n-1 && r==1){
        cout<<"star topology"<<endl;
    }else{
        cout<<"unknown topology"<<endl;
    }
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
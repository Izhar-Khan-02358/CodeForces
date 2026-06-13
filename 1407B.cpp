#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n+1);
    vector<int>br;
    vector<int>vis(n+1);
    int m=0;
    int id=0;
    for(int i=1;i<=n;i++){
        cin>>ar[i];
        if(ar[i]>m){
            m=ar[i];
            id=i;
        }
    }

    vis[id]=1;
    br.push_back(m);
    int cg=m;

    while(br.size()<n){
        int ne=0;
        int ni=0;
        int g=-1;
        for(int i=1;i<=n;i++){
            if(vis[i]==0){
                int r=__gcd(cg,ar[i]);

                if(r>g){
                    g=r;
                    ne=ar[i];
                    ni=i;
                }
            }
        }

        br.push_back(ne);
        vis[ni]=1;
        cg=g;
    }

    for(int x:br){
        cout<<x<<" ";
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
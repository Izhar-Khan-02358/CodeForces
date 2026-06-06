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

        if(u>v){
            ar[v]++;
        }else{
            ar[u]++;
        }
    }

    int ans=0;
    for(int i= 1;i<=n;i++){
        if(ar[i]==0){
            ans++; 
        }
    }
    int q;
    cin>>q;
    while(q--){
        int f;cin>>f;
        if(f==1){
            int u,v;
            cin>>u>>v;

            if(u>v){
                if(ar[v]==0){
                    ans--;
                }
                ar[v]++;
            }else{
                if(ar[u]==0){
                    ans--;
                }
                ar[u]++;
            }
        }

        if(f==2){
            int u,v;
            cin>>u>>v;

            if(u>v){
                ar[v]--;
                if(ar[v]==0){
                    ans++;
                }
            }else{
                ar[u]--;
                if(ar[u]==0){
                    ans++;
                }
            }   
        }

        if(f==3){
            cout<<ans<<endl;
        }
    }
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
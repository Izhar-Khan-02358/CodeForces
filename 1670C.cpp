#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int M=1e9+7;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n+1);
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
    vector<int>br(n+1);
    for(int i=1;i<=n;i++){
        cin>>br[i];
    }
    vector<int>dr(n+1);
    for(int i=1;i<=n;i++){
        cin>>dr[i];
    }

    vector<int>er(n+1);
    vector<bool>fr(n+1,false);

    for(int i=1;i<=n;i++){
        er[ar[i]]=br[i];

        if(dr[i]!=0){
            fr[ar[i]]=true;
        }
    }

    vector<int>vis(n+1,0);
    int ans=1;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            int p=i;
            int s=0;
            int f=0;

            while(vis[p]==0){
                vis[p]=1;
                if(fr[p]){
                    f=1;
                }
                p=er[p];
                s++;
            }

            if(s>1 && f==0){
                ans=(ans*2)%M;
            }
        }
    }

    cout<<ans<<endl;
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
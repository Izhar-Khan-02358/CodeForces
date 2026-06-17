#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<pair<int,int>>ar;
    for(int i=0;i<n;i++){
        int u;cin>>u;
        ar.push_back({u,i});
    }

    sort(ar.begin(),ar.end());


    vector<int>pf(n);
    pf[0]=ar[0].first;
    for(int i=1;i<n;i++){
        pf[i]=pf[i-1]+ar[i].first;
    }

    vector<int>br(n);
    br[ar[n-1].second]=n-1;

    int m=n-1;
    for(int i=n-2;i>=0;i--){
        if(pf[i]>=ar[i+1].first){
            br[ar[i].second]=m;
        }else{
            m=i;
            br[ar[i].second]=m;
        }
    }

    for(auto x:br){
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
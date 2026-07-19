#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n);
    int sm=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        sm+=ar[i];
    }

    vector<int>br(n);
    br[n-1]=ar[n-1];
    for(int i=n-2;i>=0;i--){
        br[i]=min(ar[i],br[i+1]);
    }

    int u=0;
    for(int i=0;i<n;i++){
        u+=br[i];
    }

    int k=sm-u;

    int g=0;
    int cs=0;
    for(int i=0;i<n;i++){
        if(i==0 or br[i]!=br[i-1]){
            cs=1;
        }else{
            cs++;
        }

        if(ar[i]==br[i]){
            g=max(g,cs-1);
        }
    }

    cout<<k+g<<endl;
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
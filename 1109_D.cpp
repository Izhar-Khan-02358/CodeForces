#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    vector<int>br(m);
    for(int i=0;i<m;i++){
        cin>>br[i];
    }

    sort(br.begin(),br.end());

    int li=0;
    int u=0;
    for(int i=0;i<m;i++){
        int id=br[i];
        int cs=0;

        for(int j=li;j<id;j++){
            cs+=ar[j];
        }

        u+=abs(cs);
        li=id;
    }

    for(int i=li;i<n;i++){
        u+=ar[i];
    }

    cout<<u<<endl;
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
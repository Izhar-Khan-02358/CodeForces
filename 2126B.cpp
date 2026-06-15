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
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }

    int u=0;
    int v=0;
    for(int i=1;i<=n;){
        if(ar[i]==0){
            v++;
            i++;
        }else{
            v=0;
            i++;
        }

        if(v==m){
            u++;
            i++;
            v=0;
        }
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
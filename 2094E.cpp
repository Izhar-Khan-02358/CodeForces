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
    vector<int>f(31);
    for(int i=0;i<n;i++){
        cin>>ar[i];

        for(int j=0;j<31;j++){
            if((ar[i]>>j)&1){
                f[j]++;
            }
        }
    }

    int u=0;
    for(int i=0;i<n;i++){
        int cs=0;

        for(int j=0;j<30;j++){
            if((ar[i]>>j)&1){
                int z=n-f[j];
                cs+=z*(1LL<<j);
            }else{
                int o=f[j];
                cs+=o*(1LL<<j);
            }
        }

        if(cs>u){
            u=cs;
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
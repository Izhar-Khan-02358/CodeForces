#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n,0);
    int s=0;
    for(int i=0;i<n;i++){
        int u;cin>>u;

        for(int j=0;j<u;j++){
            int x;cin>>x;
            ar[i]|=(1LL<<x);
        }
        s|=ar[i];
    }

    int a=0;

    for(int i=1;i<=50;i++){
        if(s&(1LL<<i)){
            int c=0;

            for(int j=0;j<n;j++){
                if((ar[j]&(1LL<<i))==0){
                    c|=ar[j];
                }
            }

            int h=__builtin_popcountll(c);
            if(h>a){
                a=h;
            }
        }
    }

    cout<<a<<endl;
    
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
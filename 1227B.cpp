#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int u;cin>>u;
        if(u%2==0){
            s.insert(u);
        }
    }

    int x=0;
    while(!s.empty()){
        auto v=*s.rbegin();
        s.erase(v);
        if(v%2==0){
            s.insert(v/2);
            x++;
        }
    }

    cout<<x<<endl;
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
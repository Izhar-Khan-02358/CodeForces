#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>ar(n);
    for(int i=1;i<=n-1;i++){
        cin>>ar[i];
    }

    int i=1;
    while(i<=n-1){
        i+=ar[i];
        if(i==m){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
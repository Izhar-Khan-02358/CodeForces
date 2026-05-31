#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n+1);
    for(int i=1;i<=n;i++){
        int u;cin>>u;
        ar[i]=u;
    }

    for(int i=1;i<=n;i++){
        int a=i;
        int b=ar[a];
        int c=ar[b];

        
        if(ar[c]==a){
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
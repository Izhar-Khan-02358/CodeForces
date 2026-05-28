#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    int u=0;
    vector<int>ar(n);
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>ar[i];

        u+=m[ar[i]];

        if(ar[i]==1){
            u+=m[2];
        }else if(ar[i]==2){
            u+=m[1];
        }

        m[ar[i]]++;
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
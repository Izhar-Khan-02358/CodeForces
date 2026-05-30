#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    int c0=0,c1=0,on=0;

    for(char x:s){
        if(x=='0')c0++;
        if(x=='1')c1++;
        if(x>='0' && x<='5')on++;
    }

    int u=n/4;

    u=min({u,c0+c1,on/2,c0+c1/2,(on+c0)/3});

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
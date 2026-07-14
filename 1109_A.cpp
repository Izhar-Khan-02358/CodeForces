#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    int m=0;
    int u=0;
    for(int i=0;i<n;i++){
        if(s[i]=='#'){
            u++;
            m=max(m,u);
        }else{
            u=0;
        }
    }

    cout<<(m+1)/2<<endl;
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
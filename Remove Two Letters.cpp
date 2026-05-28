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

    int u=0;
    for(int i=0;i<n-2;i++){
        if(s[i]==s[i+2]){
            u++;
        }
    }

    cout<<n-1-u<<endl;

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
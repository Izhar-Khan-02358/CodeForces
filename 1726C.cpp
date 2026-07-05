#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    int m=2*n;
    string s;cin>>s;

    for(int i=0;i<m-2;i++){
        if(s[i]==')' && s[i+1]=='('){
            n--;
        }
    }
    cout<<n<<endl;
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
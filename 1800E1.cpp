#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,k;
    cin>>n>>k;
    string s,t;
    cin>>s>>t;

    for(int i=max(0LL,n-k);i<min(n,k);i++){
        if(s[i]!=t[i]){
            cout<<"NO"<<endl;
            return;
        }
    }

    vector<int>f(26,0);
    for(int i=0;i<n;i++){
        f[s[i]-'a']++;
        f[t[i]-'a']--;
    }

    for(int i=0;i<26;i++){
        if(f[i]){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
    
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
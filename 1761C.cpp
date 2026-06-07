#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>st[n+1];
    for(int i=1;i<=n;i++){
        st[i].push_back(i);
    }
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        for(int j=1;j<=n;j++){
            if(s[j-1]=='1'){
                st[j].push_back(i);
            }
        }
    }

    for(int i=1;i<=n;i++){
        cout<<st[i].size()<<" ";
        for(int child:st[i]){
            cout<<child<<" ";
        }cout<<endl;
    }
    
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
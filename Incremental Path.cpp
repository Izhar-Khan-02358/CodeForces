#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

void solve() {
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    set<int>a;

    for(int i=0;i<m;i++){
        int ar;
        cin>>ar;
        a.insert(ar);
    }

    int u=1;
    for(auto x:s){
        u++;
        if(x=='B'){
            while(a.count(u)){
                u++;
            }
        }

        a.insert(u);

        
        if(x=='B'){
            while(a.count(u)){
                u++;
            }
        }
    }
    
    cout<<a.size()<<endl;
    for(auto x:a){
        cout<<x<<" ";
    }cout<<endl;
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
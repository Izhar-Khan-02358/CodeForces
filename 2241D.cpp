#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    vector<int>br(n);
    for(int i=0;i<n;i++){
        cin>>br[i];
    }

    if(n==1){
        if(br[0]<ar[0]){
            cout<<"NO"<<endl;
            return;
        }
    }

    int u=0;
    for(int i=0;i<n;i++){
        u+=(br[i]-ar[i]);
        if(u<0){
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
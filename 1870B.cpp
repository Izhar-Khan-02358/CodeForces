#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>ar(n);
    int p=-1;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(p==-1){
            p=ar[i];
        }else{
            p=(p^ar[i]);
        }
    }

    int b=0;
    vector<int>br(m);
    for(int i=0;i<m;i++){
        cin>>br[i];
        b=(b|br[i]);
    }

    int q=-1;
    for(int i=0;i<n;i++){
        if(q==-1){
            q=(b|ar[i]);
        }else{
            q=(q^(b|ar[i]));
        }
    }
    
    cout<<min(p,q)<<" "<<max(p,q)<<endl;
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
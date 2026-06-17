#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

int kla(vector<int>&v){
    int s=0;
    int h=0;

    for(int i=0;i<v.size();i++){
        s+=v[i];
        h=max(h,s);
    }

    return h;
}

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    int m;
    cin>>m;
    vector<int>br(m);
    for(int i=0;i<m;i++){
        cin>>br[i];
    }

    cout<<kla(ar)+kla(br)<<endl;
    
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
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int a,b,x;
    cin>>a>>b>>x;

    vector<int>ad,bd;
    ad.push_back(a);
    bd.push_back(b);

    while(a>0){
        a=a/x;
        ad.push_back(a);
    }

    while(b>0){
        b=b/x;
        bd.push_back(b);
    }

    int m=LLONG_MAX;
    for(int i=0;i<ad.size();i++){
        for(int j=0;j<bd.size();j++){
            int v=i+j+abs(ad[i]-bd[j]);
            m=min(m,v);
        }
    }
    
    cout<<m<<endl;
    
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
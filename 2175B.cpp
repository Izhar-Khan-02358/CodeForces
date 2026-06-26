#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,x,y;
    cin>>n>>x>>y;

    vector<int>p(n+1);
    for(int i=0;i<=n;i++){
        if(i==y){
            p[i]=x-1;
        }else{
            p[i]=i;
        }
    }

    for(int i=1;i<=n;i++){
        cout<<(p[i]^p[i-1])<<" ";
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
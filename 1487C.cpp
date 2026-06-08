#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int d=j-i;
            if(n%2){
                if(d<=n/2) cout<<1<<" ";
                else cout<<-1<<" ";
            }else{
                if(d<n/2) cout<<1<<" ";
                else if(d==n/2) cout<<0<<" ";
                else cout<<-1<<" ";
            }
        }
    }
    cout<<endl;
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
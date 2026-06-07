#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    int f=0;
    vector<int>ar(n+1);
    for(int i=1;i<=n;i++){
        cin>>ar[i];
        if(i>1 && ar[i]!=ar[i-1]){
            f=1;
        }
    }

    if(f==0){
        cout<<n/2<<endl;
        return;
    }
    sort(ar.begin(),ar.end());

    int u=0;
    for(int i=1;i<=n-1;i++){
        if(ar[i]!=ar[i+1]){
            u=max(u,i*(n-i));
        }
    }

    cout<<u<<endl;

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
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>ar(n+1);
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }

    int id=n;
    int k=min(n,m);
    for(int i=0;i<k;i++){
        if(ar[id]>n){
            cout<<"No"<<endl;
            return;
        }

        id=(id-ar[id]+n)%n;
        // if(id==0){
        //     break;
        // }
    }

    cout<<"Yes"<<endl;
    
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
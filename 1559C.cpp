#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n+1);
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }

    if(ar[1]==1){
        cout<<n+1<<" ";
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }cout<<endl;
        return;
    }

    if(ar[n]==0){
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<n+1<<endl;
        return;
    }

    int a=0,b=0;
    for(int i=1;i<=n-1;i++){
        if(ar[i]==0 && ar[i+1]==1){
            a=i;
            b=i+1;
        }
    }

    for(int i=1;i<=a;i++){
        cout<<i<<" ";
    }

    cout<<n+1<<" ";

    for(int i=b;i<=n;i++){
        cout<<i<<" ";
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
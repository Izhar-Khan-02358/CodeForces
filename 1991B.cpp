#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>b(n-1);
    vector<int>a(n);
    for(int i=0;i<n-1;i++){
        cin>>b[i];
    }

    a[0]=b[0];
    a[n-1]=b[n-2];

    for(int i=0;i<n-2;i++){
        a[i+1]=(b[i]|b[i+1]);
    }

    for(int i=0;i<n-1;i++){
        int u=(a[i]&a[i+1]);
        if(u!=b[i]){
            cout<<-1<<endl;
            return;
        }
    }

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
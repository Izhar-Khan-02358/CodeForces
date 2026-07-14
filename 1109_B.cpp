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
    int f=0;
    int s=0;
    for(int i=1;i<=n;i++){
        cin>>ar[i];

        s+=ar[i];

        if(s<((i+1)*i)/2){
            f=1;
        }
    }

    if(f==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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
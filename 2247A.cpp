#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n);
    int s=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        s+=ar[i];
    }

    if(n%2){
        cout<<"NO"<<endl;
        return;
    }

    if(s%4){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
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
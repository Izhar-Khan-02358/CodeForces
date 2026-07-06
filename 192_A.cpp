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
    int tw=0;
    int th=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];

        if(ar[i]==2){
            tw++;
        }

        if(ar[i]>2){
            th++;
        }
    }

    if(tw>1 or th>0){
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
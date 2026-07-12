#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;

    if(n==1){
        cout<<1<<endl;
        return;
    }
    
    if(n%2){
        cout<<-1<<endl;
    }else{
        for(int i=0;i<n;i++){
            if(i%2){
                cout<<i<<" ";
            }else{
                cout<<n-i<<" ";
            }
        }cout<<endl;
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
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

    int u=0;
    int v=0;
    for(int i=1;i<=n;i++){
        int k=ar[i];
        if(k==i){
            u++;
        }else if(ar[k]==i){
            v++;
        }
    }

    cout<<u+(v/2)<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
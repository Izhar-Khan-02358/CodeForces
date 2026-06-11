#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>ar;
    int f=0;
    int s=0;
    for(int i=1;i<=n;i++){
        int u;cin>>u;
        if(u!=0){
            ar.push_back(u);
            f++;
            s+=u;
        }
    }

    if((s-f)>=(n-1)){
        cout<<f<<endl;
    }else{
        cout<<s-n+1<<endl;
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
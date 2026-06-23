#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>>ar(n);
    vector<int>f(m+1,0);
    for(int i=0;i<n;i++){
        int l;cin>>l;

        ar[i].resize(l);
        for(int j=0;j<l;j++){
            cin>>ar[i][j];
            f[ar[i][j]]++;
        }
    }

    for(int i=1;i<=m;i++){
        if(f[i]==0){
            cout<<"NO"<<endl;
            return;
        }
    }

    int os=n;
    for(int i=0;i<n;i++){
        for(int x:ar[i]){
            if(f[x]<=1){
                os--;
                break;
            }
        }
    }

    if(os>=2){
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
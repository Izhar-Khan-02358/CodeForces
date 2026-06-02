#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

void solve() {
    int n,m;cin>>n>>m;

    char ar[n][n];
    if(m==(n*n-1)){
        cout<<"NO"<<endl;
        return;
    }

    int u=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(u<m){
                ar[i][j]='U';
                u++;
            }else{
                if(j==n-1 && i<n-1){
                    ar[i][j]='D';
                }else if(j<n-1){
                    ar[i][j]='R';
                }else{
                    ar[i][j]='L';
                }
            } 
        }
    }


    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ar[i][j];
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
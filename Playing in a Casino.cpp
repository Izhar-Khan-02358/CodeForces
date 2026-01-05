#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ar[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>ar[i][j];
            }
        }

        int u=0;
        for(int i=0;i<m;i++){
            vector<int>v(n,0);
            for(int j=0;j<n;j++){
                v[j]=ar[j][i];
            }

            sort(v.begin(),v.end());

            for(int i=0;i<n;i++){
                u+=v[i]*(2LL*i-n+1);
            }
        }

        cout<<u<<endl;
    }
    return 0;
}
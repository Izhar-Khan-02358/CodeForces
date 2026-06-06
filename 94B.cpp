#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    int ar[6][6]={0};
    for(int i=1;i<=n;i++){
        int u,v;
        cin>>u>>v;

        ar[u][v]=1;
        ar[v][u]=1;
    }

    for(int i=1;i<=3;i++){
        for(int j=i+1;j<=4;j++){
            for(int k=j+1;k<=5;k++){
                int h=ar[i][j]+ar[j][k]+ar[i][k];
                if(h==3 or h==0){
                    cout<<"WIN"<<endl;
                    return;
                }
            }
        }
    }

    cout<<"FAIL"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
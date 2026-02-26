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
        int u=0;
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>ar[i][j];
                if(ar[i][j]>u){
                    u=ar[i][j];
                    c=1;
                }else if(ar[i][j]==u){
                    c++;
                }
            }
        }

        int h=0;
        int rr=0;
        int cc=0;
        vector<int>row(n);
        vector<int>col(m);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ar[i][j]==u){
                    row[i]++;
                    col[j]++;
                }
            }
        }



        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i]+col[j]-(ar[i][j]==u)==c){
                    h=1;
                }
            }
        }


        cout<<u-h<<endl;
    }
    return 0;
}
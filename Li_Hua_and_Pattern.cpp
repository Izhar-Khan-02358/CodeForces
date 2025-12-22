#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ar[n][n];

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>ar[i][j];
            }
        }
        int u=n-1;
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(ar[i][j]!=ar[u-i][u-j]){
                    c++;
                }
            }
        }
        c=c/2;
        if(c<=k){
            int v=k-c;
            int a=v%2;

            if(a%2==0){
                cout<<"YES"<<endl;
            }else{
                if(n%2!=0){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
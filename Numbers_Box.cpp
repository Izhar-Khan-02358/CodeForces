#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int z=0;
        int mn=INT32_MAX;
        int neg=0;
        int sum=0;
        int ar[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>ar[i][j];

                if(ar[i][j]!=0){
                    if(ar[i][j]>0){
                        mn=min(mn,ar[i][j]);
                        sum+=ar[i][j];
                    }else{
                        mn=min(mn,-ar[i][j]);
                        sum+=(-ar[i][j]);
                    }
                }


                if(ar[i][j]!=0 && ar[i][j]<0){
                    neg++;
                }
                if(ar[i][j]==0){
                    z++;
                }
            }
        }

        if(z>0){
            cout<<sum<<endl;
        }else{
            if(neg%2==0){
                cout<<sum<<endl;
            }else{
                cout<<sum-(2*mn)<<endl;
            }
        }
    }
    return 0;
}
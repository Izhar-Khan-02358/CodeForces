#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ar[n];
        int br[n];
        int e=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];

            int d=(ar[i]/k)+bool(ar[i]%k);
            br[i]=(d*k)-ar[i];

            if(ar[i]%2==0){
                e++;
            }
        }
        int u=INT32_MAX;
        
        if(k==4){
            if(e==0){
                u=2;
            }else if(e>=2){
                u=0;
            }else if(e==1){
                u=1;
            }
        }

        for(int i=0;i<n;i++){
            if(br[i]<u){
                    u=br[i];
            }
        }

        cout<<u<<endl;
    }
    return 0;
}
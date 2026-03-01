#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>ar(n);
        vector<int>br(32);
        int u=(1<<31)-1;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            u&=ar[i];
            for(int j=0;j<32;j++){
                if((ar[i]&1<<j)!=0){
                    br[j]++;
                }
            }
        }
        
        for(int i=30;i>=0;i--){
            if(k>=(n-br[i])){
                u|=(1<<i);
                k-=(n-br[i]);
            }
        }

        cout<<u<<endl;

    }
    return 0;
}
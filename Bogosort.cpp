#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        int br[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        start:
        int u=0;
        for(int i=0;i<n;i++){
            br[i]=i-ar[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(br[i]==br[j]){
                    swap(ar[i],ar[j]);
                    u=1;
                }
            }
            if(u==1){
                goto start;
            }
        }

        for(int i=0;i<n;i++){
            cout<<ar[i]<<" ";
        }cout<<endl;
    }
    return 0;
}
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
        int pg=0;
        int cs=0;
        int p=0;
        int id=INT32_MAX;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            br[i]=ar[i];
            if(ar[i]>0 && i<id){
                 pg=1;
                 id=i;
                 cs=ar[i];
            }
        }
        sort(br,br+n);
        int ms=cs;
        if(pg==1){
           for(int i=id+1;i<n;i++){
                if((abs(ar[i]%2))!=abs(ar[i-1]%2)){
                    cs+=ar[i];
                }else if((abs(ar[i])%2)==(abs(ar[i-1])%2)){
                    cs=ar[i];
                }

                if(cs<0){
                    cs=0;
                }
                
                ms=max(ms,cs);
           }
        }else{
            ms=br[n-1];
        }

        cout<<ms<<endl;
    }
    return 0;
}
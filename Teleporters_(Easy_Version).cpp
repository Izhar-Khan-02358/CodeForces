#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;

        int ar[n];
        int br[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            br[i]=ar[i]+(i+1);
        }

        sort(br,br+n);
        int u=0;
        for(int i=0;i<n;i++){
            if(c>=br[i]){
                u++;
                c-=br[i];
            }else{
                break;
            }
        }

        cout<<u<<endl;
    }
    return 0;
}
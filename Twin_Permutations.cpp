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
            br[i]=n+1-ar[i];
        }

        for(int x:br){
            cout<<x<<" ";
        }cout<<endl;
    }
    return 0;
}
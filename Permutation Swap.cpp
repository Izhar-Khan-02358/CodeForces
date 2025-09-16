#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int ar[n];
        int br[n];
        for(int j=0;j<n;j++){
            cin>>ar[j];
            br[j]=ar[j];
        }
        sort(br,br+n);
        int ans=0;
        for(int k=0;k<n;k++){
            int v=abs(br[k]-ar[k]);
            ans= __gcd(ans,v);
        }
        cout<<ans<<endl;   
    }
    return 0;
}
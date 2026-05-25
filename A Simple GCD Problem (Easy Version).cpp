#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ar(n);
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        vector<int>br(n);
        for(int i=0;i<n;i++){
            cin>>br[i];
        }

        int ans=0;
        for(int i=0;i<n;i++){
            int u;
            if(i==0){
                u=__gcd(ar[0],ar[1]);
            }else if(i==n-1){
                u=__gcd(ar[n-2],ar[n-1]);
            }else{
                int l=__gcd(ar[i-1],ar[i]);
                int r=__gcd(ar[i+1],ar[i]);
                u=(l/__gcd(l,r))*r;
            }

            if(u<ar[i]){
                ans++;
            }
        }

        cout<<ans<<endl;
        
    }
    return 0;
}
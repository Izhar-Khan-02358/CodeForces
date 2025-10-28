#include<bits/stdc++.h>
using namespace std;
#define int long long

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
        
        int g=ar[0];
        for(int i=1;i<n;i++){
            g = __gcd(g, ar[i]);
        }
        int ans=-1;
        for(int x=2;x<=pow(10,18);x++){
            if(__gcd(x, g)==1){
                ans=x;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
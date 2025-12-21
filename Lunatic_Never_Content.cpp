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

        int d=0;
        for(int i=0;i<n/2;i++){
            int u=abs(ar[i]-ar[n-1-i]);
            d=__gcd(d,u);
        }

        cout<<d<<endl;
    }
    return 0;
}
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
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        sort(ar.begin(),ar.end());
        int g=0;
        for(int i=0;i<n;i++){
            g=__gcd(g,ar[i]-ar[0]);
        }

        if((k-ar[0])%g==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}
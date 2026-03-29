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
        int ts=0;
        int ng=0;
        vector<int>ar(n);
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]<0){
                ng=1;
            }
            ts+=ar[i];
        }

        int ms=0;
        int cs=0;
        for(int i=0;i<n-1;i++){
            cs+=ar[i];
            
            ms=max(ms,cs);
            if(cs<0){
                cs=0;
            }
        }

        reverse(ar.begin(),ar.end());
        cs=0;
        for(int i=0;i<n-1;i++){
            cs+=ar[i];
            
            ms=max(ms,cs);
            if(cs<0){
                cs=0;
            }
        }
        
        if(ms<ts) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}
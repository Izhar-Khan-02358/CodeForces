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

        int u=0;

        if(ar[n-1]!=br[0]){
            u=1;
        }

        vector<int>cr;
        for(int i=0;i<n;i++){
            int u=__gcd(ar[i],br[i]);
            int l=(ar[i]/u)*br[i];
            cr.push_back(l);
        }

        int pg=0;
        for(int i=0;i<n;i++){
            if(i==0){
                pg=cr[i];
            }else{
                pg=__gcd(pg,cr[i]);
            }

            if(pg!=ar[i]){
                u=1;
                break;
            }

        }

        int sg=0;
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                sg=cr[i];
            }else{
                sg=__gcd(sg,cr[i]);
            }

            if(sg!=br[i]){
                u=1;
                break;
            }

        }

        if(u==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}
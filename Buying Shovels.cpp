#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int u=n;
        for(int i=1;i*i<=n;i++){
            if(i>k){
                break;
            }

            if(n%i==0){
                u=min(u,n/i);

                if(n/i<=k){
                    u=min(u,i);
                }
            }
            
        }
        cout<<u<<endl;
        
    }
    return 0;
}
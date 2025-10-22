#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        vector<int>ar(n);
        vector<int>u;
        int y=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            
            if(ar[i]<=q){
                y++;
            }else{
                if(y>0){
                    u.push_back(y);
                }
                y=0;
            }
        }

        if(y>0){
            u.push_back(y);
        }

        int ans=0;
        for(auto x:u){
            if(x>=k){
                ans+=((x-k+1)*(x-k+2))/2;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
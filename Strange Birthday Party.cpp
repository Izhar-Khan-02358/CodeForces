#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>ar(n),br(m);
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int i=0;i<m;i++){
            cin>>br[i];
        }

        sort(ar.begin(),ar.end());

        int ans=0;
        int h=0;
        
        for(int i=n-1;i>=0;i--){
            int u=ar[i];
            if(h<m && h<=(u-1)){
                ans+=br[h];
                h++;
            }else{
                ans+=br[u-1];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
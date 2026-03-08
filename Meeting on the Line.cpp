#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

bool check(vector<int>ar,vector<int>br,ld m,int n){
    ld l=-1e18;
    ld r=1e18;
    for(int i=0;i<n;i++){
        if(m>br[i]){
            l=max(l,ar[i]-(m-br[i]));
            r=min(r,ar[i]+(m-br[i]));
        }else{
            return false;
        }
    }

    return l<=r;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ar(n),br(n),cr(n);
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int i=0;i<n;i++){
            cin>>br[i];
        }
        
        ld l=0;
        ld h=2e14;
        ld ans=0;
        while(h-l>1e-6){
            ld m=l+((h-l)/2);
            if(check(ar,br,m,n)){
                h=m;
                ans=m;
            }else{
                l=m;
            }
        }

        ld s=-1e18;
        ld r=1e18;
        ld f=h;
        for(int i=0;i<n;i++){
            s=max(s,ar[i]-(f-br[i]));
            r=min(r,ar[i]+(f-br[i]));
        }

        ans=(s+r)/2;

        cout<<fixed<<setprecision(6)<<ans<<endl;
    }
    return 0;
}
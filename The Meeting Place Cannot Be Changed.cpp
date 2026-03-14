#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

bool check(int n,ld m,vector<int>&ar,vector<int>&br){
    ld l=LLONG_MIN;
    ld r=LLONG_MAX;

    for(int i=0;i<n;i++){
        ld dc=m*br[i];
        l=max(l,ar[i]-dc);
        r=min(r,ar[i]+dc);

        if(r<l){
            return false;
        }
    }

    return true;
}

signed main(){
        int n;
        cin>>n;
        int mxd=LLONG_MIN;
        int mnv=LLONG_MAX;
        vector<int>ar(n),br(n);
        for(int i=0;i<n;i++){
            cin>>ar[i];
            mxd=max(mxd,ar[i]);
        }
        for(int i=0;i<n;i++){
            cin>>br[i];
            mnv=min(mnv,br[i]);
        }

        ld l=0;
        ld h=1e18;
        for(int i=0;i<100;i++){
            ld m=l+((h-l)/2);
            if(check(n,m,ar,br)){
                h=m;
            }else{
                l=m;
            }
        }
        cout<<fixed<<setprecision(12)<<h<<endl;
    return 0;
}
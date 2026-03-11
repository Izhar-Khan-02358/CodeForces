#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

bool check(vector<pair<int,int>>&v,ld m,int n){
    ld l=-1e18;
    ld r=1e18;
    for(int i=0;i<n;i++){
        ld x=m*v[i].second;
        l=max(l,v[i].first-x);
        r=min(r,v[i].first+x);
    }

    return r>=l;
}

signed main(){
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int p,q;
        cin>>p>>q;
        v.push_back({p,q});
    }

    ld h=2e14;
    ld l=0;
    ld ans=0;
    while(h-l>1e-6){
        ld m=l+((h-l)/2);
        if(check(v,m,n)){
            ans=m;
            h=m;
        }else{
            l=m;
        }
    }

    cout<<fixed<<setprecision(6)<<ans<<endl;
    return 0;
}
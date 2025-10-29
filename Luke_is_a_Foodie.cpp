#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>ar(n);
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        vector<pair<int,int>>m(n);
        for(int i=0;i<n;i++){
            int l=ar[i]-x;
            int r=ar[i]+x;
            m[i]={l,r};
        }

        int ans=0;
        int l=m[0].first;
        int r=m[0].second;
        for(int i=1;i<n;i++){
            l=max(l,m[i].first);
            r=min(r,m[i].second);

            if(l>r){
                ans++;
                l=m[i].first;
                r=m[i].second;
            }
        }

        cout<<ans<<endl;

    }
    return 0;
}
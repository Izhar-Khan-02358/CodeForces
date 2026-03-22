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
        vector<pair<int,int>>vp;
        for(int k=0;k<n;k++){
            int m=0;
            int u;
            cin>>u;
            for(int i=0;i<u;i++){
                int v;
                cin>>v;
                m=max(m,v-i+1);
            }

            vp.push_back({m+1,u});
        }

        sort(vp.begin(),vp.end());

        int ans=vp[0].first;
        int h=vp[0].second;
        for(int i=1;i<n;i++){
            ans=max(ans,vp[i].first-h);
            h+=vp[i].second;
        }

        cout<<ans-1<<endl;
    }
    return 0;
}
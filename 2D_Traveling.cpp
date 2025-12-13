#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,a,b;
        cin>>n>>k>>a>>b;
        vector<pair<int,int>>vp;
        for(int i=0;i<n;i++){
            int u,v;
            cin>>u>>v;
            vp.push_back({u,v});
        }

        if(a<=k && b<=k){
            cout<<0<<endl;
            continue;
        }

        if(n==2){
            int u=abs(vp[0].first-vp[1].first);
            int v=abs(vp[0].second-vp[1].second);
            int d=u+v;
            cout<<d<<endl;
            continue;
        }

        int dd=abs(vp[a-1].first-vp[b-1].first)+abs(vp[a-1].second-vp[b-1].second);
        
        if(k==0){
            cout<<dd<<endl;
            continue;
        }

        int lm=LLONG_MAX;
        int fm=LLONG_MAX;
        for(int i=0;i<k;i++){
            if(a-1!=i){
                int u=abs(vp[a-1].first-vp[i].first);
                int v=abs(vp[a-1].second-vp[i].second);
                int d=u+v;
                
                if(d<fm){
                    fm=d;
                }

                // cout<<d<<" "<<fm<<endl;
            }
        }


        for(int i=0;i<k;i++){
            if(b-1!=i){
                int u=abs(vp[b-1].first-vp[i].first);
                int v=abs(vp[b-1].second-vp[i].second);
                int d=u+v;
            
                if(d<lm){
                    lm=d;
                }

                // cout<<d<<" "<<lm<<endl;
            }
        }

        if(a<=k){
            cout<<min(dd,lm)<<endl;
        }else if(b<=k){
            cout<<min(fm,dd)<<endl;
        }else{
            cout<<min(dd,fm+lm)<<endl;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>ar(n);
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        vector<pair<int,int>>g(n);
        for(int i=0;i<n;i++){
            g[i]={ar[i],i+1};
        }

        vector<int>br;
        for(int i=0;i<n;i++){
            int u=g[i].first%k;

            if(u==0){
                g[i].first=-k;
            }else{
                g[i].first=-u;
            }
        }

        sort(g.begin(),g.end());
        for(int i=0;i<n;i++){
            cout<<g[i].second<<" ";
        }cout<<endl;
    }
    return 0;
}
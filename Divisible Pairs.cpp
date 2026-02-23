#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int tp=0;
        map<pair<int,int>,int>mp;

        for(int i=0;i<n;i++){
            int v=0;
            cin>>v;

            int rx=v%x;
            int ry=v%y;

            int tx=(x-rx)%x;
            int ty=ry;

            if(mp.count({tx,ty})){
                tp+=mp[{tx,ty}];
            }

            mp[{rx,ry}]++;
        }
        cout<<tp<<endl;
    }
    return 0;
}
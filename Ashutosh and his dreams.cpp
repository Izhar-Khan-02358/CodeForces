#include <bits/stdc++.h> 
using namespace std; 
#define int long long

signed main() {
    int q;
    cin>>q;
    map<int,set<int>>m;
    int p=0;
    for(int x=0;x<q;x++){
        int i;
        cin>>i;
        if(i==1){
            int w;
            cin>>w;
            m[w].insert(p);
            p++; 
        }
        else{
            int a,b;
            cin>>a>>b;
            auto u=m[a];
            m[a].clear();
            m[a+b].insert(u.begin(),u.end());
        }
    }
    vector<int>v(p);
    for(auto x:m){
        if(x.second.size()==0){
            continue;
        }
        for(int z:x.second){
            v[z]=x.first;
        }
    }
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}
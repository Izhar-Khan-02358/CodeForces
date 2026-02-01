#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>ar;
        map<int,int>m;
        for(int i=0;i<n;i++){
            int u;
            cin>>u;
            int h=u-i+1;
            ar.insert(h);
            m[h]++;
        }

        int z=0;
        for(auto x:ar){
            int v=((m[x])*(m[x]-1))/2;
            z+=v;
        }

        cout<<z<<endl;
    }
    return 0;
}
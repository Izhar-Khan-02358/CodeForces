#include<bits/stdc++.h>
using namespace std;
#define int long long

int msb(int x){
    return 63-__builtin_clz(x);
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ar(n);
        map<int,int>m;
        set<int>s;

        for(int i=0;i<n;i++){
            cin>>ar[i];
            int u=msb(ar[i]);
            s.insert(u);
            m[u]++;
        }

        int a=0;
        for(auto x:s){
            int u=m[x];
            int v=((u)*(u-1))/2;
            a+=v;
        }

        cout<<a<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        map<int,int>m;
        set<int>s;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            s.insert(ar[i]);
            m[ar[i]]++;
        }

        int u=0;
        for(auto x:s){
            int p=m[x]-m[x-1];
            if(p>0){
                u+=p;
            }
        }

        cout<<u<<'\n';
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ar(n);
        vector<int>ir;
        vector<int>vr;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]<(i+1)){
                ir.push_back(i+1);
                vr.push_back(ar[i]);
            }
        }

        int u=0;
        int v=vr.size();
        for(int i=0;i<v;i++){
            u+=lower_bound(ir.begin(),ir.end(),vr[i])-ir.begin();
        }
        
        cout<<u<<endl;
    }
    return 0;
}
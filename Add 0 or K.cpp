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

            ar[i]+=((ar[i]%(k+1))*k);
        }

        for(auto x:ar){
            cout<<x<<" ";
        }cout<<endl;

    }
    return 0;
}
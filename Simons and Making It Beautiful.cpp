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
        int l=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]==n){
                l=i;
            }
        }

        swap(ar[0],ar[l]);

        for(auto x:ar){
            cout<<x<<" ";
        }cout<<endl;
    }
    return 0;
}
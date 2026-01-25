#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>p(n);
        int m=0;
        for(int i=0;i<n;i++){
            cin>>p[i];
        }


        vector<int>q(n);
        for(int i=0;i<n;i++){
                q[i]=n+1-p[i];
        }

        for(auto x:q){
            cout<<x<<" ";
        }cout<<endl;
    }
    return 0;
}
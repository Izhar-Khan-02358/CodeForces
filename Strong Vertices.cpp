#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int u=LLONG_MIN;
        vector<int>ar(n),br(n),cr(n),dr;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        for(int i=0;i<n;i++){
            cin>>br[i];
            cr[i]=ar[i]-br[i];
            u=max(u,cr[i]);
        }

        int c=0;
        for(int i=0;i<n;i++){
            if(cr[i]==u){
                c++;
                dr.push_back(i+1);
            }
        }


        cout<<c<<endl;
        for(auto x:dr){
            cout<<x<<" ";
        }cout<<endl;
        
    }
    return 0;
}
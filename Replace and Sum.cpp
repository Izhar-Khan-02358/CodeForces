#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>ar(n+1,0);
        vector<int>br(n+1);
        for(int i=1;i<=n;i++){
            cin>>ar[i];
        }
        for(int i=1;i<=n;i++){
            cin>>br[i];
        }

        ar[n]=max(ar[n],br[n]);
        for(int i=n-1;i>0;i--){
            ar[i]=max({ar[i],br[i],ar[i+1]});
        }

        int p[n+2];
        p[0]=ar[0];
        for(int i=1;i<=n;i++){
            p[i]=ar[i]+p[i-1];
        }

        while(q--){
            int l,r;
            cin>>l>>r;
            cout<<p[r]-p[l-1]<<" ";
        }cout<<endl;
    }
    return 0;
}
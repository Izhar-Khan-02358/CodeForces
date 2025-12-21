#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int m=1e9+7;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ar(n);
        vector<int>br(n);

        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        for(int i=0;i<n;i++){
            cin>>br[i];
        }

        sort(ar.begin(),ar.end());
        sort(br.begin(),br.end());

        int u=1;
        for(int i=0;i<n;i++){
            int p=lower_bound(br.begin(),br.end(),ar[i])-br.begin();
            int q=p-i;

            u=u*q%m;
        }

        cout<<u<<endl;

    }
    return 0;
}
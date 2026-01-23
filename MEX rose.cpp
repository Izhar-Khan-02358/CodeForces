#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int c=0;
        vector<int>ar(n);
        vector<int>br(n+1,0);
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]==k){
                c++;
            }

            if(ar[i]<k){
                br[ar[i]]++;
            }
        }
        sort(ar.begin(),ar.end());

        int a=0;
        for(int i=0;i<k;i++){
            if(br[i]==0){
                a++;
            }
        }

        cout<<max(a,c)<<endl;
    }
    return 0;
}
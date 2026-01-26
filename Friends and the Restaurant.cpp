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
        vector<int>br(n);
        vector<int>cr(n);
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int i=0;i<n;i++){
            cin>>br[i];
        }
        for(int i=0;i<n;i++){
            cr[i]=br[i]-ar[i];
        }

        sort(cr.begin(),cr.end());

        int u=0;
        int i=0;
        int j=n-1;
        while(i<j){
            if(cr[i]+cr[j]>=0){
                u++;
                i++;
                j--;
            }else{
                i++;
            }
        }

        cout<<u<<endl;
    }
    return 0;
}
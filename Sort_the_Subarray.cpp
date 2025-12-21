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

        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        int f=LLONG_MAX;
        int l=LLONG_MIN;
        for(int i=0;i<n;i++){
            cin>>br[i];

            if(ar[i]!=br[i]){
                f=min(f,i);
                l=max(l,i);
            }
        }

        
        for(int i=f-1;i>=0;i--){
            if(br[i]<=br[i+1]){
                f=i;
            }else{
                break;
            }
        }

        for(int i=l+1;i<n;i++){
            if(br[i]>=br[i-1]){
                l=i;
            }else{
                break;
            }
        }

        cout<<f+1<<" "<<l+1<<endl;
    }
    return 0;
    
}
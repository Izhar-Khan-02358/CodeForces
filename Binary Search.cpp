#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
        int n,k;
        cin>>n>>k;
        vector<int>ar(n);
        vector<int>br(k);
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int i=0;i<k;i++){
            cin>>br[i];
        }

        for(int i=0;i<k;i++){
            int a=1;
            int u=br[i];
            int l=0;
            int h=n-1;

            
            while(l<=h){
                int m=l+((h-l)/2);
                if(ar[m]<u){
                    l=m+1;
                }else if(ar[m]>u){
                    h=m-1;
                }else{
                    a=0;
                    break;
                }
            }

            if(a==0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    return 0;
}
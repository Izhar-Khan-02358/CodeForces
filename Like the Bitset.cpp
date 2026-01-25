#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string ar;
        cin>>ar;
        vector<int>br(n);
        int c=0;
        int m=0;
        for(int i=0;i<n;i++){
            if(ar[i]=='1'){
                c++;
            }else{
                c=0;
            }

            m=max(m,c);
        }

        if(m>=k){
            cout<<"NO"<<endl;
            continue;
        }else{
            cout<<"YES"<<endl;

            int u=n;
            int v=1;
            for(int i=0;i<n;i++){
                if(ar[i]=='0'){
                    br[i]=u;
                    u--;
                }else{
                    br[i]=v;
                    v++;
                }
            }
        }

        for(auto x:br){
            cout<<x<<" ";
        }cout<<endl;
    }
    return 0;
}
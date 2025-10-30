#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int r,x,d,n;
        cin>>r>>x>>d>>n;
        int u=r;
        string s;
        cin>>s;

        int ans=0;
        if(r<x){
            cout<<n<<endl;
        }else{
            int j=(r-x)/d+1;

            for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    j--;
                    ans++;
                }

                if(j==0){
                    ans+=(n-i-1);
                    break;
                }
            }

            cout<<ans<<endl;
        }
    }
    return 0;
}
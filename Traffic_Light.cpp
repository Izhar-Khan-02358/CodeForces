#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        string a=s+s;
        int x=2*n;
        int u=0;
        int v=INT32_MIN;
        int ans=0;
        for(int i=x-1;i>=0;i--){
            if(a[i]=='g'){
                u=i;
            }

            if(a[i]==c){
                int v=i;
                ans=max(ans,u-v);
            }
        }
        
        cout<<ans<<endl;
    }
    return 0;
}
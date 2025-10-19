#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l=s.length();
        int z=0;
        int o=0;
        for(int i=0;i<l;i++){
            if(s[i]=='0'){
                z++;
            }else{
                o++;
            }
        }
        int t=0;
        for(int i=0;i<l;i++){
            if(s[i]=='0' && o>0){
                t++;
                o--;
            }else if(s[i]=='1' && z>0){
                t++;
                z--;
            }else{
                break;
            }
        }
        int ans=l-t;
        cout<<ans<<endl;
    }
    return 0;
}
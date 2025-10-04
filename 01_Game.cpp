#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int o=0;
        int z=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                o++;
            }else{
               z++;
            }
        }
        int u=min(o,z);
        if(u%2==0){
            cout<<"NET"<<endl;
        }else{
            cout<<"DA"<<endl;
        }
    }
    return 0;
}
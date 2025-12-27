#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int u=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='Y'){
                u++;
            }
        }

        if(u<2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int o=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                o++;
            }
        }

        int u=-1;
        if(o<=k){
            cout<<"Alice"<<endl;
            continue;
        }else{
            if(n>=2*k){
                cout<<"Bob"<<endl;
            }else{
                cout<<"Alice"<<endl;
            }
        }

    }
    return 0;
}
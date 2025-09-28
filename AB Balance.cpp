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
        if(s[0]==s[n-1]){
            cout<<s<<endl;
        }else{
            s[0]='a';
            s[n-1]='a';
            cout<<s<<endl;
        }
    }
    return 0;
}
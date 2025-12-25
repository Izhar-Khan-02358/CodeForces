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
        map<char,int>m;
        string a="";
        for(int i=0;i<n;i++){
            m[s[i]]++;

            if(m[s[i]]>1){
                break;
            }else{
                a+=s[i];
            }
        }

        int l=a.length();
        if(n==l){
            cout<<"YES"<<endl;
            continue;
        }

        int u=0;
        for(int i=l;i<n;i++){
            if(s[i]!=s[i-l]){
                u=1;
            }
        }

        if(u==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
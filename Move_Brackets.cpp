#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int a=0;
        int u=0;
        for(int i=0;i<n;i++){
            if(u==0 && s[i]==')'){
                a++;
            }
            if(u>0 && s[i]==')'){
                u--;
            }
            if(u>=0 && s[i]=='('){
                u++;
            }
        }

        cout<<a<<endl;
    }
    return 0;
}
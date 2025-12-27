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
        int c=0;
        if(s[0]=='u'){
            s[0]='s';
            c++;
        }

        if(s[n-1]=='u'){
            s[n-1]='s';
            c++;
        }

        for(int i=1;i<n-1;i++){
            if(s[i]=='u'){
                if(s[i-1]=='u'){
                    s[i-1]='s';
                    c++;
                }
                if(s[i+1]=='u'){
                    s[i+1]='s';
                    c++;
                }
            }
        }

        cout<<c<<endl;
    }
    return 0;
}
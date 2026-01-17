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
        
        int c=0;
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j+=i){
                if(s[j-1]=='1'){
                    break;
                }

                if(s[j-1]=='2'){
                    continue;
                }

                if(s[j-1]=='0'){
                    c+=i;
                    s[j-1]='2';
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
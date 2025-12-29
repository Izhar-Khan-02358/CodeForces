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
        int u=0;

        for(int i=0;i<n/2;i++){
            if(s[i]=='0' && s[n-1-i]=='1'){
                u++;
            }else if(s[i]=='1' && s[n-1-i]=='0'){
                u++;
            }else{
                break;
            }
        }

        cout<<n-(2*u)<<endl;
    }
    return 0;
}
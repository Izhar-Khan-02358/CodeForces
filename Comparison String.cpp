#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int ans=0;
        int v=0;
        for(int j=0;j<n;j++){
            if(s[j]==s[j+1]){
                v++;
            }else{
                v=0;
            }

            if(v>ans){
                ans=v;
            }
        }
        cout<<ans+2<<endl;
    }
    return 0;
}
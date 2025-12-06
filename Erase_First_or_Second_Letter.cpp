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
        map<char,int>m;
        int ans=0;
        for(int i=0;i<n;i++){
            m[s[i]]++;
            
            if(m[s[i]]==1){
                ans+=(n-i);
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
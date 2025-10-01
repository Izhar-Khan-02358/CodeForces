#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int u=0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                u++;
            }
        }
        cout<<u<<endl;
    return 0;
}
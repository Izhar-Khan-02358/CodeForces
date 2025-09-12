#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int v=s.length();
        if(v>10){
            cout<<s[0]<<v-2<<s[v-1]<<endl;
        }else{
            cout<<s<<endl;
        }
    }
    return 0;
}
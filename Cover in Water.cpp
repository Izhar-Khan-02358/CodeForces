#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int r=0;
        for(int j=0;j<n;j++){
        if(s[j]=='.' && s[j+1]=='.' && s[j+2]=='.' && j<n-2){
            r=1;
        }
    }
        int e=s.length()-(count(s.begin(),s.end(),'#'));
        if(r==1){
            cout<<2<<endl;
        }else{
            cout<<e<<endl;
        }
 
    }
    return 0;
}
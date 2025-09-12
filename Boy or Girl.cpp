#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int y=0;
    int n=s.length();
    string a="qwertyuiopasdfghjklzxcvbnm";
    for(int i=0;i<26;i++){
        int x=0;
        for(int j=0;j<n;j++){
            if(a[i]==s[j]){
                x++;
            }
        }
        if(x>1){
            y+=(x-1);
        }
    }
    int t=n-y;
    if(t%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    string y="";
    vector<int>v;
    for(int i=0;i<s.length();i+=2){
        int a=(int)s[i];
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int u=v.size();
    for(int i=0;i<u;i++){
        char b=(char)v[i];
        if(i<u){
            y+=b;
        }
        if(i<u-1){
            y+='+';
        }
    }
    
    cout<<y<<endl;
    return 0;
}
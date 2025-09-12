#include<iostream>
using namespace std;
int main(){
    int t,n,m;
    string a,b,c;
    cin>>t;
    for(int i=0;i<t;i++){
    cin>>n;
    cin>>a;
    cin>>m;
    cin>>b;
    cin>>c;
    string ans;
    for(int i=0;i<m;i++){
        if(c[i]=='V'){
           a=string(1,b[i])+a;
        }
        if(c[i]=='D'){
            a=a+string(1,b[i]);
        }
    }
    cout<<a<<endl;
    }
    
    return 0;
}
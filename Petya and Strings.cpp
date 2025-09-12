#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    string b;
    cin>>a;
    cin>>b;
    int x=0;
    int y=0;
    
    for(int i=0;i<a.length();i++){
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
    }
    for(int i=0;i<a.length();i++){
        x=0;
        if(a[i]>b[i]){
            cout<<1<<endl;
            return 0;
        }
        else if(a[i]<b[i]){
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<0<<endl;
}
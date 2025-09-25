#include<bits/stdc++.h>
using namespace std;

int main(){
    string u="";
    cin>>u;
    int w=(int)u[0];
    if(w<123 && w>96){
        w-=32;
    }
    u[0]=(char)w;
    cout<<u<<endl;
    return 0;
}
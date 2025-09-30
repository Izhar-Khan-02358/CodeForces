#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int u=0;
    if(a==b){
        u=1;
    }
    while(a<b){
        a=a*3;
        b=b*2;
        u++;
        if(a==b){
            u++;
        }
    }
    
    cout<<u<<endl;
    return 0;
}
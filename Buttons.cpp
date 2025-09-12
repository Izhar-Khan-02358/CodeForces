#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int a,b,c;
    cin>>a>>b>>c;
    if(c%2==0){
        if(a>b){
            cout<<"First"<<endl;
        }
        if(a<=b){
            cout<<"Second"<<endl;
        }
    }
    if(c%2!=0){
        if(a>=b){
           cout<<"First"<<endl; 
        }
        if(a<b){
            cout<<"Second"<<endl;
        }
    }
   }
    return 0;
}
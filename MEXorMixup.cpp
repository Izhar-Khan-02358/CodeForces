#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int x=0;
        int u=(a-1)%4;
        if(u==0){
            x=a-1;
        }else if(u==1){
            x=1;
        }else if(u==2){
            x=a;
        }else{
            x=0;
        }

        if(x==b){
            cout<<a<<endl;
        }else if(x!=b){
            if((x^b)!=a){
                cout<<a+1<<endl;
            }else{
                cout<<a+2<<endl;
            }
        }
    }
    return 0;
}
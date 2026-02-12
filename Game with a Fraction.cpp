#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int p,q;
    cin>>p>>q;

    int u=0;
    if(q>p){
        if(3*p>=2*q){
            u=1;
        }
    }

    if(u==0){
        cout<<"Alice"<<endl;
    }else{
        cout<<"Bob"<<endl;
    }
    }
    return 0;
}
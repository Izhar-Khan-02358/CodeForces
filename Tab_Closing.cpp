#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        if(n*b<=a){
            cout<<1<<endl;
        }else if(a==b){
            cout<<1<<endl;
        }else{
            cout<<2<<endl;
        }
    }
    return 0;
}


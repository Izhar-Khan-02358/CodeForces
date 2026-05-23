#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    cin>>n;

    int a=0,b=1023;

    for(int i=0;i<n;i++){
        char op;
        int x;
        cin>>op>>x;

        if(op=='|'){
            a|=x;
            b|=x;
        }
        else if(op=='&'){
            a&=x;
            b&=x;
        }
        else{
            a^=x;
            b^=x;
        }
    }

    int And=1023,Or=0,Xor=0;

    for(int i=0;i<10;i++){
        int x=(a>>i)&1;
        int y=(b>>i)&1;

        if(x==0 && y==0){
            And^=(1<<i);
        }
        else if(x==1 && y==1){
            Or|=(1<<i);
        }
        else if(x==1 && y==0){
            Xor|=(1<<i);
        }
    }

    cout<<3<<endl;
    cout<<"& "<<And<<endl;
    cout<<"| "<<Or<<endl;
    cout<<"^ "<<Xor<<endl;

    return 0;
}
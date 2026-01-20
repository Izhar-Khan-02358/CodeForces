#include<bits/stdc++.h>
using namespace std;
#define int long long

int isprime(int x){
    if(x<=2){
        return 0;
    }
    int u=1;
    vector<int>v(x,true);
    v[0]=false;
    v[1]=false;

    for(int i=3;i*i<x;i+=2){
        if(v[i]){
            for(int j=i*i;j<x;j+=2*i){
                v[i]=false;
            }
        }
    }

    for(int i=3;i<x;i+=2){
        if(v[i])u++;
    }

    return u;
}

signed main(){
    int n;
    cin>>n;
    
    cout<<isprime(n)<<endl;
    return 0;
}
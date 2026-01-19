#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
        int k,n,w;
        cin>>k>>n>>w;
        int u=(w*(w+1))/2;
        int p=k*u;
        if(p>n){
            cout<<p-n<<endl;
        }else{
            cout<<0<<endl;
        }
    return 0;
}
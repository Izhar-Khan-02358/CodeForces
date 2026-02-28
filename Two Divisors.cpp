#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        int u=0;
        if(b%a==0){
            u=b*(b/a);
        }else{
            int g=__gcd(a,b);
            int m=b/g;
            u=a*m;
        }
        
        cout<<u<<endl;
    }
    return 0;
}
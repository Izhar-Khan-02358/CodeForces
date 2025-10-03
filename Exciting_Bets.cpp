#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int u=abs(a-b);
        int p=0;
        if(u==0){
            cout<<0<<" "<<0<<endl;
            continue;
        }
        int r=a%u;
        int m=min(r,u - r);
        cout<<u<<" "<<m<<endl;
    }
    return 0;
}
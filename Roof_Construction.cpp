#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int msb=log2(n-1);
        int u=pow(2,msb);
        int v=u;
        while((u-1)>=0){
            cout<<u-1<<" ";
            u--;
        }
        while(v<=(n-1)){
            cout<<v<<" ";
            v++;
        }cout<<endl;
    }
    return 0;
}
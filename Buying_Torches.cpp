#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;

        int sn=(k*y)+(k-1);
        int tr=sn/(x-1)+k+bool(sn%(x-1));

        cout<<tr<<endl;
    }
    return 0;
}
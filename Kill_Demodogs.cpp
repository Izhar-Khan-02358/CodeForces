#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int m=1e9+7;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int u=((((n*(n+1))%m)*(4*n-1))%m*337)%m;

        cout<<u<<endl;
    }
    return 0;
}
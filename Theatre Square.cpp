#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,m,a;
    cin>>n>>m>>a;
    cout<<((n+a-1)/a)*((m+a-1)/a)<<endl;
    return 0;
}
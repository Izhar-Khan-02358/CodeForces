#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

signed main(){
    int n;
    cin>>n;

    if(n%2){
        int m=(n-1)>>1;
        cout<<2*(m+1)*(m+2)<<endl;
    }else{
        int m=n>>1;
        cout<<(m+1)*(m+1)<<endl;
    }
    return 0;
}
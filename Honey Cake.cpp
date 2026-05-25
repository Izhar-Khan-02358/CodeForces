#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

signed main(){
    int w,h,d,n,x,y,z;
    cin>>w>>h>>d>>n;

    x=__gcd(w,n);
    n/=x;
    y=__gcd(h,n);
    n/=y;
    z=__gcd(d,n);
    n/=z;

    if(n==1){
        cout<<x-1<<" "<<y-1<<" "<<z-1<<endl;
    }else{
        cout<<-1<<endl;
    }

    return 0;
}
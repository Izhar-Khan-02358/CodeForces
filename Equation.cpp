#include<bits/stdc++.h>
using namespace std;
#define int long double

bool check(int m,int c){
    int u=m*m+sqrt(m);

    if(u>=c){
        return true;
    }

    return false;
}

signed main(){
    int a;
    cin>>a;

    int l=0.0;
    int h=sqrt(a);
    int u=h;
    while(h-l>1e-6){
        int m=l+((h-l)/2);
        if(check(m,a)){
            h=m;
        }else{
            l=m;
        }
    }

    cout<<fixed<<setprecision(6)<<l<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

bool check(int a,int b,int c,int d){
    int u=(c/a)+(c/b);
    if(u>=d){
        return true;
    }

    return false;
}

signed main(){
    int n,x,y;
    cin>>n>>x>>y;

    if(n==1){
        cout<<min(x,y)<<endl;
        return 0;
    }

    
    int mn=min(x,y);
    int l=mn;
    int h=n*(max(x,y));
    int k=h;
    while(l<=h){
        int m=l+((h-l)/2);
        if(check(x,y,m,n-1)){
            h=m-1;
            k=m;
        }else{
            l=m+1;
        }
    }

    cout<<k+mn<<endl;
    return 0;
}
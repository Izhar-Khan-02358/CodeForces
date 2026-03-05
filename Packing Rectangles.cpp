#include<bits/stdc++.h>
using namespace std;
#define int long long

bool check(int a,int b, int c,int d){
    int p=c/a;
    int q=c/b;

    if(p==0 or q==0){
        return false;
    }

    if(p>=((d+q-1)/q)){
        return true;
    }

    return false;
}

signed main(){
    int w,h,n;
    cin>>w>>h>>n;

    int ans=0;

    int l=1;
    int r=max(w,h)*n;
    while(l<=r){
        int m=l+((r-l)/2);
        if(check(w,h,m,n)){
            ans=m;
            r=m-1;
        }else{
            l=m+1;
        }
    }

    cout<<ans<<endl;
    return 0;
}
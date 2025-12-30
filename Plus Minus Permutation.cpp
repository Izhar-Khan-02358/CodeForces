#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;

        int m=0;

        int a=n/x;
        int b=n/y;

        if(x==y){
            cout<<0<<endl;
            continue;
        }

        int g=__gcd(x,y);
        int l=(x*y)/g;

        int u=n/l;

        int xc=a-u;
        int yc=b-u;

        int q=((n)*(n+1))/2-((n-xc)*(n-xc+1))/2;
        m+=q;

        int h=((yc+1)*(yc))/2;
        m-=h;

        cout<<m<<endl;
    }
    return 0;
}
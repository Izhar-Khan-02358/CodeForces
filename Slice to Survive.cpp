#include<bits/stdc++.h>
using namespace std;
#define int long long

int solve(int x){
    int u=0;
    while(x>1){
        x=(x+1)/2;
        u++;
    }

    return u;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,a,b;
        cin>>n>>m>>a>>b;

        int ma=min(a,n-a+1);
        int mb=min(b,m-b+1);

        int p=1+solve(ma)+solve(m);
        int q=1+solve(mb)+solve(n);

        cout<<min(p,q)<<endl;
    }
    return 0;
}
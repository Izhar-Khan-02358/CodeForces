#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,m,t;
    cin>>n>>m>>t;
    int g=__gcd(n,m);
    int a=n/g;
    int b=m/g;
    while(t--){
        int p,q,r,s;
        cin>>p>>q>>r>>s;

        int f=0,j=0;
        if(p==1){
            f=(q-1)/a;
        }else{
            f=(q-1)/b;
        }

        if(r==1){
            j=(s-1)/a;
        }else{
            j=(s-1)/b;
        }

        if(f==j){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
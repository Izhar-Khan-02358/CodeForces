#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;

    int a=LLONG_MAX,b=LLONG_MAX;
    int f=LLONG_MAX;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            int p=n/i;
            int q=n/p;

            if(__gcd(p,q)==1){
                if(max(p,q)<f){
                    f=max(p,q);
                    a=p;
                    b=q;
                }
            }
        }
    }
    cout<<a<<" "<<b<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,m;
    cin>>n>>m;

    int u=0;

    while(m>n){
        if(m%2==0){
            m/=2;
        }else{
            m++;
        }

        u++;
    }

    u+=(n-m);

    cout<<u<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
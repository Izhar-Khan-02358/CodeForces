#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int u=a*b;
    int x=0,y=0;
    for(int i=a+1;i<=c;i++){
        x=i;
        int g=__gcd(x,u);
        int p=u/g;

        y=(b/p+1)*p;

        if(y<=d){
            cout<<x<<" "<<y<<endl;
            return;
        }
    }
    
    cout<<-1<<" "<<-1<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
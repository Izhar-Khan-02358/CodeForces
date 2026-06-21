#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

int lcm(int a,int b){
    return (a/__gcd(a, b))*b;
}

void solve() {
    int a,b,c,m;
    cin>>a>>b>>c>>m;

    int ad=m/a;
    int bd=m/b;
    int cd=m/c;

    int ab=m/lcm(a,b);
    int cb=m/lcm(b,c);
    int ac=m/lcm(a,c);

    int abcl=lcm(lcm(a,b),c);
    int abc=(m/(abcl));

    cout<<6*(ad)-3*(ab)-3*(ac)+2*(abc)<<" ";
    cout<<6*(bd)-3*(ab)-3*(cb)+2*(abc)<<" ";
    cout<<6*(cd)-3*(cb)-3*(ac)+2*(abc)<<endl;;

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
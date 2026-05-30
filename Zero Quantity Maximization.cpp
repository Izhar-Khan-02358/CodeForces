#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    vector<int>br(n);
    for(int i=0;i<n;i++){
        cin>>br[i];
    }

    int m=0;
    int u=0;
    map<pair<int,int>,int>ba;

    for(int i=0;i<n;i++){
        int a=ar[i];
        int b=br[i];
        if(a==0){
            if(b==0){
                u++;
            }
            continue;
        }

        b=-b;
        int g=__gcd(abs(a),abs(b));

        a/=g;
        b/=g;

        if(a<0){
            a=-a;
            b=-b;
        }

        ba[{b,a}]++;

        m=max(m,ba[{b,a}]);
        
    }

    cout<<m+u<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
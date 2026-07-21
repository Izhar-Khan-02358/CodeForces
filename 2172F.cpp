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

    vector<int>p(n),s(n);
    p[0]=ar[0];
    for(int i=1;i<n;i++){
        p[i]=__gcd(p[i-1],ar[i]);
    }

    s[n-1]=ar[n-1];
    for(int i=n-2;i>=0;i--){
        s[i]=__gcd(s[i+1],ar[i]);
    }

    int u=p[n-1];
    for(int i=1;i<n-1;i++){
        u+=min(p[i],s[i]);
    }
    cout<<u<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
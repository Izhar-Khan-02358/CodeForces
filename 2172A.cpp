#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int a,b,c;cin>>a>>b>>c;
    int s=a+b+c;
    int mx=max({a,b,c});
    int mn=min({a,b,c});

    if(mx-mn>=10){
        cout<<"check again"<<endl;
    }else{
        cout<<"final"<<" "<<s-mx-mn<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
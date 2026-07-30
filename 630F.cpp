#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'
#define sorta(v) sort((v).begin(), (v).end())
#define sortd(v) sort((v).rbegin(), (v).rend())

const int N=2*(1e5)+5;

void solve() {
    int n;
    cin>>n;
    
    int a=n*(n-1)*(n-2)*(n-3)*(n-4)/120;
    int b=n*(n-1)*(n-2)*(n-3)*(n-4)*(n-5)/720;
    int c=n/1*(n-1)/2*(n-2)/3*(n-3)/4*(n-4)/5*(n-5)/6*(n-6)/7;
    cout<<a+b+c;    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
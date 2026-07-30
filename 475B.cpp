#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'
#define sorta(v) sort((v).begin(), (v).end())
#define sortd(v) sort((v).rbegin(), (v).rend())

const int N=2*(1e5)+5;

void solve() {
    int n,m;
    cin>>n>>m;

    string s1,s2;
    cin>>s1>>s2;

    string s3={s1.front(),s1.back(),s2.front(),s2.back()};

    if(s3=="<>v^" or s3=="><^v"){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
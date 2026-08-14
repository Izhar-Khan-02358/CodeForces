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
    string s;
    cin>>s;

    string p[4]={"0011","0110","1001","1100"};
    int r=0;

    for(int i=0;i<4;i++){
        int f=1;
        for(int j=0;j<n;j++){
            if(s[j]!='?' && s[j]!=p[i][j%4]){
                f=0;
                break;
            }
        }
        if(f){
            r++;
        }
    }

    cout<<r<<endl;
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
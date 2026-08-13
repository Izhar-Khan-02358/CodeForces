#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'
#define sorta(v) sort((v).begin(), (v).end())
#define sortd(v) sort((v).rbegin(), (v).rend())

const int N=2*(1e5)+5;

void solve() {
    string s;
    cin>>s;

    int n=s.length();
    int idz=-1,ido=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='0' && idz==-1){
            idz=i;
        }
        if(s[i]=='1' && ido==-1){
            ido=i;
        }
    }

    for(int i=0;i<n;i++){
        if(i!=idz && i!=ido){
            cout<<s[i];
        }
    }cout<<endl;
    
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
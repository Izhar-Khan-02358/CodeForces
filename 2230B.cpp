#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    string s;cin>>s;

    int u=0;
    int f=0,g=0,h=0,o=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='4'){
            f++;
        }
        if(s[i]=='2'){
            h++;
        }
    }

    u=o+h;

    for(char c:s){
        if(c=='1' or c=='3'){
            o++;
        }else if(c=='2'){
            h--;
        }

        u=min(u,o+h);
    }


    cout<<f+u<<endl;
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
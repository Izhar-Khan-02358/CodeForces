#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    string s;cin>>s;

    int z=0;
    int o=0;
    if(s[0]=='0'){
        z++;
    }else{
        o++;
    }

    int f=0;
    for(int i=1;i<n;i++){
        if(s[i]=='0'){
            z++;
        }else{
            o++;
        }

        if(s[i]!=s[i-1]){
            f++;
        }
    }

    if(z==0 or o==0){
        cout<<1<<endl;
        return;
    }
    
    if(f>1){
        cout<<1<<endl;
        return;
    }

    if(f==1){
        cout<<2<<endl;
        return;
    }
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
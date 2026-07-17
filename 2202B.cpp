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

    int f=0;

    if(n%2){
        if(s[0]=='b'){
            cout<<"NO"<<endl;
            return;
        }

        for(int i=1;i<n;i+=2){
            if(s[i]!='?' && s[i+1]!='?' && s[i]==s[i+1]){
                cout<<"NO"<<endl;
                return;
            }
        }
    }else{
        for(int i=0;i<n;i +=2){
            if(s[i]!='?' && s[i+1]!='?' && s[i]==s[i+1]) {
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    cout<<"YES"<<endl;
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
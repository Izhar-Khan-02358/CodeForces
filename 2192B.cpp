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

    vector<int>oi,zi;
    int o=0,z=0;
    int a=-1,b=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            o++;
            oi.push_back(i+1);
        }else{
            z++;
            zi.push_back(i+1);
        }
    }

    if(o==0){
        cout<<0<<endl;
        return;
    }

    if(o%2==0){
        cout<<o<<endl;
        for(auto x:oi){
            cout<<x<<" ";
        }cout<<endl;
        return;
    }

    if(z%2){
        cout<<z<<endl;
        for(auto x:zi){
            cout<<x<<" ";
        }cout<<endl;
        return;
    }
    
    cout<<-1<<endl;
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
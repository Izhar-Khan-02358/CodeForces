#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+5;

void solve() {
    int n,k;
    cin>>n>>k;

    if(n<=(k+1)){
        cout<<-1<<endl;
        return;
    }
    
    int u=k/2+1;
    int v=k-u+2;
    int w=n-u-v;

    string s="";
    int z=0;
    int o=0;
    for(int i=0;i<u;i++){
        s+='0';
        z++;
    }
    for(int i=0;i<v;i++){
        s+='1';
        o++;
    }

    for(int i=0;i<w;i++){
        if(i%2){
            s+='1';
            o++;
        }else{
            s+='0';
            z++;
        }
    }

    if(abs(z-o)>1){
        cout<<-1<<endl;
        return;
    }
    cout<<s<<endl;
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
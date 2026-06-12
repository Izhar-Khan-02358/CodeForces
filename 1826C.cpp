#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=(1e6)+1;

int spf[N];

void sieve(){
    for(int i=1;i<N;i++){
        spf[i]=i;
    }
    for(int i=2;i*i<N;i++){
        if(spf[i]==i){
            for(int j=i*i;j<N;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
}

void solve() {
    int n,m;
    cin>>n>>m;
    
    if(n==1){
        cout<<"YES"<<endl;
    }else if(spf[n]<=m){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
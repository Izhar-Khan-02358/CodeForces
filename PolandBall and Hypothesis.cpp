#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N= 1e6+10;
vector<int>sv(N,1);

void sieve(){
    for(int i=2;i<=N;i++){
        if(sv[i]==1){
            for(int j=i*i;j<=N;j+=i){
                sv[j]=0;
            }
        }
    }
}

void solve() {
    int n;
    cin>>n;
    
    for(int i=1;i<=N;i++){
        int u=n*i+1;
        if(sv[u]==0){
            cout<<i<<endl;
            return;
        }
    }

    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sieve();
    solve();
    
    return 0;
}
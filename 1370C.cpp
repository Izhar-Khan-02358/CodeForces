#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

bool kla(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }

    return true;
}

void solve() {
    int n;
    cin>>n;

    if(n==2){
        cout<<"Ashishgup"<<endl;
        return;
    }
    
    if(n==1 or __builtin_popcount(n)==1){
        cout<<"FastestFinger"<<endl;
        return;
    }

    if(n%2){
        cout<<"Ashishgup"<<endl;
        return;
    }

    int u=0;
    while(n%2==0){
        u++;
        n/=2;
    }

    if(u==1){
        if(kla(n)){
            cout<<"FastestFinger"<<endl;
            return;
        }else{
            cout<<"Ashishgup"<<endl;
            return;
        }
    }else{
        cout<<"Ashishgup"<<endl;
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
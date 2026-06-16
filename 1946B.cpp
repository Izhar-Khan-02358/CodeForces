#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int M=(1e9)+7;

int p(int b,int e){
    int r=1;
    b%=M;

    while(e>0){
        if(e%2) r=(r*b)%M;
        b=(b*b)%M;
        e/=2;
    }
    return r;
}

void solve() {
    int n,m;
    cin>>n>>m;
    int h=0;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
        h+=ar[i];
    }

    h=(h%M+M)%M;

    int ms=0;
    int s=0;
    int i=0;
    while(i<n){
        s+=ar[i];
        ms=max(s,ms);
        if(s<0){
            s=0;
        }
        i++;
    }

    ms%=M;

    int u=(p(2,m)-1+M)%M;

    int g=u*ms;
    g%=M;

    cout<<(h+g)%M<<endl;
    
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
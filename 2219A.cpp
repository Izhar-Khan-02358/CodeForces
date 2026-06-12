#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int p,q;
    cin>>p>>q;

    int u=2*(p+2*q)+1;

    int w=-1,v=-1;

    for(int i=3;i*i<=u;i+=2){

        if(u%i==0){
            int a=i;
            int b=u/i;

            w=(a-1)/2;
            v=(b-1)/2;

            break;
        }
    }

    if(w==-1){
        cout<<w<<endl;
    }else{
        cout<<w<<" "<<v<<endl;
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
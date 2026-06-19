#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n+1);
    int s=0;
    for(int i=1;i<=n;i++){
        cin>>ar[i];

        s+=ar[i];
    }

    if(n<3 or s%3!=0){
        cout<<0<<endl;
        return;
    }

    int u=s/3;

    int g=0;
    int c=0;
    int f=2*u;
    int p=0;
    for(int i=1;i<=n-1;i++){
        g+=ar[i];

        if(g==f){
            p+=c;
        }
        

        if(g==u){
            c++;
        }
    }

    cout<<p<<endl;

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
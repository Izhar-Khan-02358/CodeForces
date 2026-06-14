#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

vector<int>gd(int n){
    vector<int>v;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if(i*i!=n){
                v.push_back(n/i);
            }
        }
    }
    return v;
}

void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    vector<int>ad=gd(a);
    vector<int>bd=gd(b);

    for(int u:ad){
        for(int v:bd){
            int p=u*v;
            int q=(a/u)*(b/v);

            int x=(a/p+1)*p;
            int y=(b/q+1)*q;

            if(x<=c && y<=d){
                cout<<x<<" "<<y<<endl;
                return;
            }
        }
    }
    
    cout<<-1<<" "<<-1<<endl;
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
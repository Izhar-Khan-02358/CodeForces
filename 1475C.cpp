#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'
#define sorta(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.rbegin(), v.rend())

const int N=2*(1e5)+5;

void solve() {
    int a,b,k;
    cin>>a>>b>>k;
    vector<int>ar(k+1);
    vector<int>br(k+1);

    vector<int>by(a+1,0);
    vector<int>g(b+1,0);
    for(int i=1;i<=k;i++){
        cin>>ar[i];
        by[ar[i]]++;
    }

    for(int i=1;i<=k;i++){
        cin>>br[i];
        g[br[i]]++;
    }

    int tw=(k*(k-1))/2;

    for(int i=1;i<=a;i++){
        if(by[i]>1){
            tw-=(by[i]*(by[i]-1))/2;
        }
    }

    for(int i=1;i<=b;i++){
        if(g[i]>1){
            tw-=(g[i]*(g[i]-1))/2;
        }
    }

    cout<<tw<<endl;
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
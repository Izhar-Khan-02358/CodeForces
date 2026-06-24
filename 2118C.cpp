#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,k;
    cin>>n>>k;
    int u=0;
    vector<int>ar(n+1);
    for(int i=0;i<n;i++){
        cin>>ar[i];
        u+=(__builtin_popcountll(ar[i]));
    }

    for(int i=0;i<=60;i++){
        int c=(1LL<<i);

        if(c>k){
            break;
        }

        int h=0;
        for(int j=0;j<n;j++){
            if((ar[j]&c)==0){
                h++;
            }
        }

        int b=min(h,k/c);
        u+=b;
        k-=b*c;
    }

    cout<<u<<endl;
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
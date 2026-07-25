#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+5;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

      vector<int>v(n);
      for(int i=0;i<n;i++){
        vector<int>x(n,0),y(n,0);

        for(int j=1;j<n;j++){
            int c=(i+j)%n;
            int p=(c-1+n)%n;
            x[c]=max(x[p],ar[p]);
        }

        for(int j=1;j<n;j++){
            int c=(i-j+n)%n;
            int p=(c+1)%n;
            y[c]=max(y[p],ar[c]);
        }

        int u=0;
        for(int k=0;k<n;k++){
            u+=min(x[k],y[k]);
        }

        v[i]=u;
      }

      for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
      }cout<<endl;
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
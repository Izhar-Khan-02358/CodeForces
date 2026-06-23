#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    
    int m=1<<n;
    vector<int>v(m,0);
    vector<int>p;

    for(int i=n;i>=1;i--){
        int u=(1<<i)-1;

        if(!v[u]){
            p.push_back(u);
            v[u]=1;
        }

        for(int j=u;j<m;j++){
            if(!v[j] && (j&u)==u){
                p.push_back(j);
                v[j]=1;
            }
        }
    }

    if(!v[0]){
        p.push_back(0);
        v[0]=1;
    }

    for(int i=1;i<m;i++){
        if(!v[i]){
            p.push_back(i);
            v[i]=1;
        }
    }

    for(int x:p){
        cout<<x<<" ";
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
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

void solve() {
    int n,x; cin>>n>>x;

    if(n%x){
        cout<<-1<<endl;
        return;
    }

    vector<int>v(n,0);
    v[0]=x;
    v[n-1]=1;
    
    int u=x;
    while(u<n){
        for(int i=2*u;i<=n;i+=u){
            if(n%i==0){
                v[u-1]=i;
                u=i;
                break;
            }
        }
    }

    for(int i=0;i<n;i++){
        if(!v[i]){
            v[i]=i+1;
        }
    }

    for(auto x:v){
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
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,s=0;
    cin>>n;
    vector<int>ar(n+1);
    set<int>st;
    for(int i=1;i<=n;i++){
        cin>>ar[i];
        s+=ar[i];
        st.insert(ar[i]);
    }

    if(st.size()==1){
        cout<<0<<endl;
        return;
    }

    int u=0;
    
    for(int i=1;i<=n;i++){
        u+=ar[i];
        if(s%u!=0) continue;

        int v=0,w=0;

        for(int j=1;j<=n;j++){
            v+=ar[j];

            if(v==u){
                v=0;
            }else if(v>u){
                w=1;
                break;
            }
        }

        if(v==0 && w==0){
            int k=s/u;
            cout<<n-k<<endl;
            return;
        }
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
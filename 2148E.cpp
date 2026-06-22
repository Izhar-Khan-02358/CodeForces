#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>ar(n);
    vector<int>fq(n+1,0);
    vector<int>v(n+1,0);
    for(int i=0;i<n;i++){
        cin>>ar[i];
        fq[ar[i]]++;
    }

    if(n%k){
        cout<<0<<endl;
        return;
    }

    for(int i=1;i<=n;i++){
        if(fq[i]%k){
            cout<<0<<endl;
            return;
        }
        v[i]=fq[i]/k;
    }

    vector<int>wc(n+1,0);
    int u=0;
    int l=0;

    for(int i=0;i<n;i++){
        wc[ar[i]]++;

        while(wc[ar[i]]>v[ar[i]]){
            wc[ar[l]]--;
            l++;
        }

        u+=(i-l+1);
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
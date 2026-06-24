#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>ar(2*n);
    vector<int>l,r,l2,r2,fl(n+1,0),v;
    for(int i=0;i<2*n;i++){
        cin>>ar[i];

        if(i<n){
            fl[ar[i]]++;
        }
    }

    for(int i=1;i<=n;i++){
        if(fl[i]==2){
            l2.push_back(i);
        }else if(fl[i]==0){
            r2.push_back(i);
        }else{
            v.push_back(i);
        }
    }

    if(l2.size()>0){
        int i=0;
        while(l2.size()>i && l.size()<2*k){
            l.push_back(l2[i]);
            l.push_back(l2[i]);

            r.push_back(r2[i]);
            r.push_back(r2[i]);

            i++;
        }
    }

    if(l.size()<2*k){
        int u=2*k-l.size();
        for(int i=0;i<u;i++){
            l.push_back(v[i]);
            r.push_back(v[i]);
        }
    }

    for(auto x:l){
        cout<<x<<" ";
    }cout<<endl;

    for(auto x:r){
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
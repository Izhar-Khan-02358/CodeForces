#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'
#define sorta(v) sort((v).begin(), (v).end())
#define sortd(v) sort((v).rbegin(), (v).rend())

const int N=2*(1e5)+5;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n+1,0);
    vector<pair<int,int>>v;
    for(int i=0;i<n-1;i++){
        int p,q;
        cin>>p>>q;
        v.push_back({p,q});
    }

    ar[1]=1;
    int u=1;
    int f=0;
    while(u<n){
        for(int i=0;i<n-1;i++){
            int x=v[i].first;
            int y=v[i].second;
            if(ar[x]==1 && ar[y]==0){
                ar[y]=1;
                u++;
            }else if(ar[y]==1 && ar[x]==0){
                ar[x]=1;
                u++;
            }
        }

        f++;
    }

    cout<<f<<endl;
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
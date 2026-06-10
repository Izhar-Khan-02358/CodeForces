#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    priority_queue<pair<int,int>>ar;
    for(int i=1;i<=n;i++){
        int u;cin>>u;
        if(u>0) ar.push({u,i});
    }

    vector<pair<int,int>>br;
    while(ar.size()>1){
        auto p=ar.top();ar.pop();
        auto q=ar.top();ar.pop();

        br.push_back({p.second,q.second});

        p.first--;
        q.first--;

        if(p.first>0) ar.push(p);
        if(q.first>0) ar.push(q);
    }

    cout<<br.size()<<endl;
    for(auto x:br){
        cout<<x.first<<" "<<x.second<<endl;
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
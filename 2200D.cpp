#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,x,y;
    cin>>n>>x>>y;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    vector<int>s,m;

    for(int i=0;i<x;i++){
        s.push_back(ar[i]);
    }
    for(int i=y;i<n;i++){
        s.push_back(ar[i]);
    }

    for(int i=x;i<y;i++){
        m.push_back(ar[i]);
    }

    vector<int>p(s.size());

    if(!s.empty()){
        p[0]=s[0];
        for(int i=1;i<s.size();i++){
            p[i]=max(p[i-1],s[i]);
        }
    }

    int bid=s.size()+1;
    int bv=2e9;
    int mid=-1;

    for(int i=0;i<m.size();i++){
        int v=m[i];

        int k=upper_bound(p.begin(),p.end(),v)-p.begin();

        if(k<bid or (k==bid && v<bv)){
            bv=v;
            bid=k;
            mid=i;
        }
    }

    vector<int>ans;
    for(int i=0;i<bid;i++){
        ans.push_back(s[i]);
    }

    for(int i=0;i<m.size();i++){
        ans.push_back(m[(mid+i)%m.size()]);
    }

    for(int i=bid;i<s.size();i++){
        ans.push_back(s[i]);
    }

    for(int x:ans){
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
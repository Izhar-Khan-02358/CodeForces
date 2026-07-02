#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

int kla(int u,vector<int>&v,int n,vector<int>&r){
    int i=lower_bound(v.begin(),v.end(),u)-v.begin();
    int h=n-i;

    int j=upper_bound(r.begin(),r.end(),h)-r.begin();

    return u*j;
}

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    vector<int>br(n);
    for(int i=0;i<n;i++){
        cin>>br[i];
    }

    sort(ar.begin(),ar.end());

    vector<int>p(n);
    p[0]=br[0];
    for(int i=1;i<n;i++){
        p[i]=p[i-1]+br[i];
    }

    int m=LLONG_MIN;
    m=max(m,kla(0,ar,n,p));

    for(int i=0;i<n;i++){
        m=max(m,kla(ar[i],ar,n,p));
    }
    
    cout<<m<<endl;
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
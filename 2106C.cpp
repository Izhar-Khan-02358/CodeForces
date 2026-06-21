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
    int mx=LLONG_MIN;
    int mn=LLONG_MAX;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        mx=max(mx,ar[i]);
        mn=min(mn,ar[i]);
    }

    vector<int>br(n);
    set<int>s;
    int f=0;
    int p=0;
    for(int i=0;i<n;i++){
        cin>>br[i];
        if(br[i]!=-1){
            f=1;

            s.insert(br[i]+ar[i]);

            int y=br[i]+ar[i];
            if(y>2*k){
                p=1;
            }
        }

    }

    if(p){
        cout<<0<<endl;
        return;
    }

    if(s.size()>1){
        cout<<0<<endl;
        return;
    }

    if(!f){
        cout<<max(0LL,mn+k-mx+1)<<endl;
        return;
    }

    int u=*s.begin();

    for(int i=0;i<n;i++){
        if(br[i]==-1){
            int h=u-ar[i];

            if(h<0 or h>k){
                cout<<0<<endl;
                return;
            }
        }
    }

    cout<<1<<endl;
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
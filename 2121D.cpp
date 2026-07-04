#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n+1);
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }

    vector<int>br(n+1);
    for(int i=1;i<=n;i++){
        cin>>br[i];
    }

    vector<pair<int,int>>p;

    for(int i=1;i<=n;i++){
        if(ar[i]>br[i]){
            swap(ar[i],br[i]);

            p.push_back({3,i});
        }
    }

    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            if(ar[j]>ar[j+1]){
                swap(ar[j],ar[j+1]);
                p.push_back({1,j});
            }
        }
    }


    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            if(br[j]>br[j+1]){
                swap(br[j],br[j+1]);
                p.push_back({2,j});
            }
        }
    }

    cout<<p.size()<<endl;
    for(auto x:p){
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
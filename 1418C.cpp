#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n);
    vector<int>br;
    int l=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(i>0){
            if(ar[i]==1){
                l++;
            }else{
                br.push_back(l);
                l=0;
            }
        }
    }
    br.push_back(l);

    int u=0;
    if(ar[0]==1){
        u++;
    }

    for(auto x:br){
        u+=(x/3);
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
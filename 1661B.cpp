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
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    for(int i=0;i<n;i++){
        
        int ans=15;
        for(int j=0;j<=15;j++){
            int v=(ar[i]+j)%32768;
            int m=0;

            while(v!=0){
                v=(v*2)%32768;
                m++;
            }

            ans=min(ans,j+m);
        }

        br.push_back(ans);
    }

    for(auto x:br){
        cout<<x<<" ";
    }cout<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(30);
    int m=-1;
    for(int i=1;i<=n;i++){
        int u,v;
        cin>>u>>v;
        if(u==1){
            ar[v]++;
            m=max(m,v);
        }else{
            for(int j=m;j>=0;j--){
                int u=v/(pow(2,j));
                int h=min(ar[j],u);

                v-=(h*(pow(2,j)));
            }

            if(v){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
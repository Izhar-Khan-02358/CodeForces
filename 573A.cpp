#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    set<int>s;
    
    for(int i=0;i<n;i++){
        int u;cin>>u;

        while(u%2==0){
            u/=2;
        }

        while(u%3==0){
            u/=3;
        }
        s.insert(u);
    }

    int r=s.size();

    if(r==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
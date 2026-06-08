#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>ar(m+1);
    vector<int>fid(n+1,N);
    vector<int>lid(n+1,-1);
    set<int>s;
    for(int i=1;i<=m;i++){
        cin>>ar[i];
        s.insert(ar[i]);

        if(fid[ar[i]]==N){
            fid[ar[i]]=i;
        }

        lid[ar[i]]=i;
    }

    if(n==1){
        if(m>0) cout<<0<<endl;
        else cout<<1<<endl;
        return;
    }

    int ts=(n-2)*3+4;
    ts-=s.size();

    for(int i=1;i<=n-1;i++){
        if(lid[i+1]>=fid[i]) ts--;
        if(lid[i]>=fid[i+1]) ts--;
    }
    cout<<ts<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
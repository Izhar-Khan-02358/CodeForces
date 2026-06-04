#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>ar[n+1];
    vector<int>d(n+1);
    vector<int>p(n+1);
    for(int i=1;i<=n;i++){
        int u;
        cin>>u;
        for(int j=0;j<u;j++){
            int v;cin>>v;
            ar[i].push_back(v);
        }
    }

    for(int i=1;i<=n;i++){
        for(int x:ar[i]){
            if(p[x]==0){
                d[i]=1;
                p[x]=1;
                break;
            }
        }
    }

    int ip=0;
    int id=0;
    for(int i=1;i<=n;i++){
        if(p[i]==0){
            ip=i;
        }
    }
    for(int i=1;i<=n;i++){
        if(d[i]==0){
            id=i;
        }
    }

    if(ip!=0 && id!=0){
        cout<<"IMPROVE"<<endl;
        cout<<id<<" "<<ip<<endl;
    }else{
        cout<<"OPTIMAL"<<endl;
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
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;
vector<pair<int,int>>ar;
bool check(int a,int b){
    for(auto x:ar){
        int u=x.first;
        int v=x.second;

        if(u!=a && u!=b && v!=a && v!=b){
            return false;
        }
    }

    return true;
}

void solve() {
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v;cin>>u>>v;
        ar.push_back({u,v});
    }

    int x1=ar[0].first,x2=ar[0].second;
    int y11=0,y12=0,y21=0,y22=0;
    int f=0;
    int s=0;
    for(int i=0;i<m;i++){
        if(ar[i].first!=x1 && ar[i].second!=x1){
            y11=ar[i].first;
            y12=ar[i].second;
            break;
        }
        f++;

        if(f==m){
            cout<<"YES"<<endl;
            return;
        }
    }

    for(int i=0;i<m;i++){
        if(ar[i].first!=x2 && ar[i].second!=x2){
            y21=ar[i].first;
            y22=ar[i].second;
            break;
        }
        s++;

        if(s==m){
            cout<<"YES"<<endl;
            return;
        }
    }

    if(check(x1,y11) or check(x1,y12) or check(x2,y21) or check(x2,y22)){
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
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;
vector<pair<int,int>>f;
vector<pair<int,int>>g;
int pf[N];
void makef(int v){
    pf[v]=v;
}

int findf(int v){
    if(v==pf[v]) return v;
    return pf[v]=findf(pf[v]); 
}

void Unionf(int u,int v){
    int a=findf(u);
    int b=findf(v);
    if(a!=b){
        pf[b]=a;
    }
}

int pg[N];
void makeg(int v){
    pg[v]=v;
}

int findg(int v){
    if(v==pg[v]) return v;
    return pg[v]=findg(pg[v]); 
}

void Uniong(int a,int b){
    int u=findg(a);
    int v=findg(b);
    if(u!=v){
        pg[v]=u;
    }
}

void solve() {
    int n,a,b;
    cin>>n>>a>>b;

    f.clear();
    g.clear();
    for(int i=1;i<=n;i++){
        makef(i);
        makeg(i);
    }

    for(int i=1;i<=a;i++){
        int u,v;cin>>u>>v;
        f.push_back({min(u,v),max(u,v)});
    }

    for(int i=1;i<=b;i++){
        int u,v;cin>>u>>v;
        Uniong(u,v);
        g.push_back({min(u,v),max(u,v)});
    }

    int ans=0;
    for(auto x:f){
        int p=x.first;
        int q=x.second;
        if(findg(p)==findg(q)){
            Unionf(p,q);
        }else{
            ans++; 
        }
    }

    int cg=0;
    int cf=0;
    for(int i=1;i<=n;i++){
        if(pf[i]==i){
            cf++;
        }
        if(pg[i]==i){
            cg++;
        }
    }

    cout<<abs(cf-cg) + ans<<endl;

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
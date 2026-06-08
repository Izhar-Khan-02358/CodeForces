#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=5*(1e5)+1;

int parent[N];
int Size[N];

void make(int v){
    parent[v]=v;
    Size[v]=1;
}

int find(int v){
    if(parent[v]==v) return v;
    else return parent[v]=find(parent[v]);
}

void Union(int u,int v){
    int a=find(u);
    int b=find(v);

    if(a!=b){
        if(Size[a]<Size[b]) swap(a,b);
        parent[b]=a;
        Size[a]+=Size[b];
    }

}

void solve() {
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++){
        make(i);
    }

    for(int i=1;i<=m;i++){
        int u;cin>>u;
        vector<int>v;
        for(int i=0;i<u;i++){
            int h;cin>>h;
            v.push_back(h);
        }

        for(int i=0;i<u-1;i++){
            Union(v[i],v[i+1]);
        }

        v.clear();
    }

    for(int i=1;i<=n;i++){
        cout<<Size[find(i)]<<" ";
    }cout<<endl;

    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
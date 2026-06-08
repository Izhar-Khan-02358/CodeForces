#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int M=(1e9)+7;
const int N=(1e5)+1;
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

int power(int base,int exp){
    int res=1;
    base%=M;
    while(exp>0){
        if(exp%2==1) res=(res*base)%M;
        base=(base*base)%M;
        exp/=2;
    }
    return res;
}
void solve() {
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        make(i);
    }
    for(int i=1;i<=n-1;i++){
        int u,v,w;
        cin>>u>>v>>w;

        if(w==0){
            Union(u,v);
        }
    }

    int u=power(n,k);

    int h=0;
    for(int i=1;i<=n;i++){
        if(parent[i]==i){
            int u=Size[i];
            int v=power(u,k);
            h=(h+v)%M;
        }
    }
    
    cout<<(u-h+M)%M<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
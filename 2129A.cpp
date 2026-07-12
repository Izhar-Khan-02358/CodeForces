#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=6*(1e3)+3;

int p[N];
int s[N];

void make(int v){
    p[v]=v;
    s[v]=1;
}

int find(int v){
    if(v==p[v]) return v;
    else return p[v]=find(p[v]);
}

void un(int a,int b){
    int r=find(a);
    int q=find(b);

    if(r!=q){
        if(s[r]>s[q]) swap(r,q);

        p[q]=r;
        s[r]+=s[q];
    }
}

void solve() {
    int n;
    cin>>n;

    for(int i=1;i<=2*n;i++){
        make(i);
    }
    
    vector<int>ar;
    for(int i=0;i<n;i++){
        int u,v;cin>>u>>v;
        if(find(u)!=find(v)){
            ar.push_back(i+1);
            un(u,v);
        } 
    }

    cout<<ar.size()<<endl;
    for(int x:ar){
        cout<<x<<" ";
    }cout<<endl;
    
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
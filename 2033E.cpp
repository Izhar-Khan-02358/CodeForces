#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=(1e6)+1;
vector<int>p(N);
vector<int>s(N);

void make(int v){
    p[v]=v;
    s[v]=1;
}

int find(int v){
    if(v==p[v]) return v;
    return p[v]=find(p[v]);
}

void Union(int x,int y){
    int a=find(x);int b=find(y);

    if(a!=b){
        if(s[a]<s[b]) swap(a,b);
        p[b]=a;
        s[a]+=s[b];
    }
}

void solve() {
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        make(i);
    }

    vector<int>ar(n+1);
    for(int i=1;i<=n;i++){
        cin>>ar[i];
        Union(i,ar[i]);
    }

    int u=0;
    for(int i=1;i<=n;i++){
        if(p[i]==i){
            u+=((s[i]-1)/2);
        }
    }

    cout<<u<<endl;
    
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
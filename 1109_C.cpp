#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;
int p[N];

void make(int v){
    p[v]=v;
}

int find(int v){
    if(v==p[v]) return v;
    return p[v]=find(p[v]);
}

void un(int a,int b){
    int w=find(a);
    int x=find(b);

    if(w!=x){
        p[x]=w;
    }
}

void solve() {
    int n,x,y;
    cin>>n>>x>>y;
    for(int i=1;i<=n;i++){
        make(i);
    }

    for(int i=1;i<=n;i++){
        if(i+x<=n){
            un(i,i+x);
        }

        if(i+y<=n){
            un(i,i+y);
        }
    }
    vector<int>ar(n+1);
    int f=0;
    for(int i=1;i<=n;i++){
        cin>>ar[i];

        if(f==0){
            if(find(i)!=find(ar[i])){
                f=1;
            }
        }
    }

    if(f==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=4*(1e5)+1;
const int M=1e9+7;
int p[N];
void make(int v){
    p[v]=v;
}

int find(int v){
    if(p[v]==v) return v;
    else return p[v]=find(p[v]);
}

void un(int a,int b){
    int x=find(a);
    int y=find(b);

    if(x!=y){
        p[y]=x;
    }
}

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=1;i<=n;i++){
        make(i);
    }

    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    vector<int>br(n);
    for(int i=0;i<n;i++){
        cin>>br[i];
    }
    
    for(int i=0;i<n;i++){
        un(ar[i],br[i]);
    }

    int u=0;
    for(int i=0;i<n;i++){
        if(p[ar[i]]==ar[i]){
            u++;
        }
    }

    int a=1;
    for(int i=0;i<u;i++){
        a=(a*2)%M;
    }
    cout<<a<<endl;
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
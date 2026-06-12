#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>ar(n+1);
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
    k++;

    int u=0;
    for(int i=1;i<=n-1;i++){
        int v=ar[i+1];
        int h=pow(10,v);

        int p=pow(10,ar[i]);
        int g=h-1;
        g/=p;
        if(g<=k){
            u+=(g*p);
            k-=g;
        }else{
            u+=(k*p);
            k=0;
        }

        if(k==0){
            break;
        }
    }

    if(k!=0){
        int p=pow(10,ar[n]);
        u+=(k*p);
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
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    int r=0;
    vector<int>ar(n+1);
    for(int i=1;i<=n;i++){
        cin>>ar[i];
        r+=ar[i];
    }

    if(r<3){
        cout<<0<<endl;
        return;
    }

    int u=0;
    int st=0;
    int e=0;
    int ts=0;
    for(int i=1;i<=n;i++){
        if(ar[i]==1){
            u++;
        }else if(ar[i]%2==0){
            int g=ar[i]/2;
            st+=g;
            ts++;
        }else if(ar[i]%2){
            int g=((ar[i]+1)/2);
            st+=g-1;
            e++;
            ts++;
        }
    }

    int a=2*st+e;
    if(ts==1){
        cout<<a+min(u,st)<<endl;
    }else{
        int h=st-ts;
        cout<<a+min(u,h)<<endl;
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
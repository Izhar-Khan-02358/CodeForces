#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,q;
    cin>>n>>q;
    string s;cin>>s;

    vector<int>v(n);
    if(s[0]==s[1]){
        v[0]=1;
    }
    for(int i=1;i<n-1;i++){
        v[i]=v[i-1];
        if(s[i]==s[i+1]){
            v[i]++;
        }
    }
    
    while(q--){
        int l,r,k;
        cin>>l>>r>>k;

        int f=0;

        l--;
        r--;

        if(r>l){
            if(l==0){
                f=v[r-1];
            }
            if(l>0){
                f=v[r-1]-v[l-1];
            }
        }

        int u=(f+1)/2;

        if(u<=k){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
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
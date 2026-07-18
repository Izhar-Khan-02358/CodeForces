#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    vector<int>br(n);
    for(int i=0;i<n;i++){
        cin>>br[i];
    }

    int m=LLONG_MIN;

    vector<int>l(n),r(n);

    l[0]=ar[0];
    for(int i=1;i<n;i++){
        if(l[i-1]>0){
            l[i]=l[i-1]+ar[i];
        }else{
            l[i]=ar[i];
        }
    }

    r[n-1]=ar[n-1];
    for(int i=n-2;i>=0;i--){
        if(r[i+1]>0){
            r[i]=r[i+1]+ar[i];
        }else{
            r[i]=ar[i];
        }
    }


    if(k%2==0){
        cout<<*max_element(l.begin(),l.end())<<endl;
    }else{
        int u=LLONG_MIN;
        for(int i=0;i<n;i++){
            u=max(u,l[i]+r[i]+br[i]-ar[i]);
        }

        cout<<u<<endl;
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
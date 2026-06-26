#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    vector<int>p(n);
    p[0]=ar[0];
    for(int i=1;i<n;i++){
        p[i]=max(p[i-1],ar[i]);
    }

    int k=0;
    for(int i=0;i<n;i++){
        k=max(k,p[i]-ar[i]);
    }

    int c=0;
    for(int i=0;i<n;i++){
        if(ar[i]>=c){
            c=ar[i];
        }else{
            ar[i]+=k;

            if(ar[i]>=c){
                c=ar[i];
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    cout<<"YES"<<endl;
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
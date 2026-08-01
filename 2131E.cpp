#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'
#define sorta(v) sort((v).begin(), (v).end())
#define sortd(v) sort((v).rbegin(), (v).rend())

const int N=2*(1e5)+5;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    vector<int>br(n);
    for(int i=0;i<n;i++){
        cin>>br[i];
    }

    if(ar[n-1]!=br[n-1]){
        cout<<"NO"<<endl;
        return;
    }

    for(int i=n-2;i>=0;i--){
        if(br[i]==ar[i] or br[i]==(ar[i]^ar[i+1]) or br[i]==(ar[i]^br[i+1])){
            continue;
        }else{
            cout<<"NO"<<endl;
            return;
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
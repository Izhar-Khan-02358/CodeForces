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
    string a,b;
    cin>>a>>b;
    
    for(int i=0;i<2;i++){
        vector<int>ai,bi;
        for(int j=i;j<n;j+=2){
            if(a[j]=='1') ai.push_back(j);
            if(b[j]=='1') bi.push_back(j);
        }

        if(ai.size()!=bi.size()){
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
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

    sort(ar.begin(),ar.end());

    for(int i=n;i>0;i--){
        int u=0;

        int h=min(n,4*i-1);

        int e=upper_bound(ar.begin(), ar.end(), h) - ar.begin();

        if(i<=h){
            int v=(upper_bound(ar.begin(),ar.end(),i)-ar.begin())-(lower_bound(ar.begin(),ar.end(),i)-ar.begin());
            u+=v;
        }
        if(2*i<=h){
            int v=(upper_bound(ar.begin(),ar.end(),2*i)-ar.begin())-(lower_bound(ar.begin(),ar.end(),2*i)-ar.begin());
            u+=v;
        }
        if(3*i<=h){
            int v=(upper_bound(ar.begin(),ar.end(),3*i)-ar.begin())-(lower_bound(ar.begin(),ar.end(),3*i)-ar.begin());
            u+=v;
        }

        if((e-u)<=k){
            cout<<i<<endl;
            return;
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
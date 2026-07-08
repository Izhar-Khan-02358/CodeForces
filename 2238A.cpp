#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

void solve() {
    int n,c;
    cin>>n>>c;
    int a=0,b=0;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
        a+=ar[i];
    }

    int f=0;
    vector<int>br(n);
    for(int i=0;i<n;i++){
        cin>>br[i];
        b+=br[i];

        if(ar[i]<br[i]){
            f=1;
        }
    }

    vector<int>cr=ar;
    vector<int>dr=br;
    sort(cr.begin(),cr.end());
    sort(dr.begin(),dr.end());

    for(int i=0;i<n;i++){
        if(dr[i]>cr[i]){
            cout<<-1<<endl;
            return;
        }
    }

    if(f){
        cout<<(c+(a-b))<<endl;
    }else{
        cout<<(a-b)<<endl;
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
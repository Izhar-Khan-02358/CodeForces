#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,x;
    cin>>n>>x;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    vector<int>br(n);
    for(int i=0;i<n;i++){
        cin>>br[i];
    }

    vector<int>cr(n);
    for(int i=0;i<n;i++){
        cin>>cr[i];
    }

    int u=0;

    int a=0,b=0,c=0;
    for(int i=0;i<n;i++){
        if(a==0 && ((ar[i]|x)==x)){
            u=(u|ar[i]);
        }else{
            a=1;
        }

        if(b==0 && ((br[i]|x)==x)){
            u=(u|br[i]);
        }else{
            b=1;
        }

        if(c==0 && ((cr[i]|x)==x)){
            u=(u|cr[i]);
        }else{
            c=1;
        }
    }

    if(u==x){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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
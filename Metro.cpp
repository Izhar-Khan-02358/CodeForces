#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

void solve() {
    int n,s;
    cin>>n>>s;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    vector<int>br(n);
    for(int i=0;i<n;i++){
        cin>>br[i];
    }

    if(ar[0]==0 or (ar[s-1]==0 && br[s-1]==0)){
        cout<<"NO"<<endl;
        return;
    }

    if(ar[s-1]==1){
        cout<<"YES"<<endl;
    }else{
        for(int i=s;i<n;i++){
            if(ar[i]==1 && br[i]==1){
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
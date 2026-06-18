#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n+1);
    int f=0;
    int id=-1;
    for(int i=1;i<=n;i++){
        cin>>ar[i];

        if(ar[i]>1 && id==-1){
            f=1;
            id=i;
        }
    }

    if(f==0){
        if(n%2){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }else{
        if(id%2){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
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
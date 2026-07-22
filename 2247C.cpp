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
    int ao=0;
    int bz=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]==1){
            ao=1;
        }

    }

    int oz=0;
    int zo=0;
    vector<int>br(n);
    for(int i=0;i<n;i++){
        cin>>br[i];

        if(br[i]==0){
            bz=1;
        }

        if(ar[i]==0 && br[i]==1){
            zo++;
        }

        if(ar[i]==1 && br[i]==0){
            oz++;
        }
    }

    if(oz==0 && zo>0){
        if(ao && bz){
            cout<<2<<endl;
            return;
        }
        cout<<-1<<endl;
        return;
    }

    if(oz==0 && zo==0){
        cout<<0<<endl;
        return;
    }

    if(oz%2==1){
        cout<<1<<endl;
        return;
    }

    if(oz%2==0){
        cout<<2<<endl;
        return;
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
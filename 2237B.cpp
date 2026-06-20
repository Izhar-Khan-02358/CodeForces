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
    vector<int>cr(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
        cr[i]=ar[i];
    }

    vector<int>br(n);
    for(int i=0;i<n;i++){
        cin>>br[i];
    }

    sort(cr.begin(),cr.end());

    for(int i=0;i<n;i++){
        if(cr[i]>br[i]){
            cout<<-1<<endl;
            return;
        }
    }

    int u=0;
    for(int i=0;i<n;i++){
        int f=-1;

        for(int j=i;j<n;j++){
            if(ar[j]<=br[i]){
                f=j;
                break;
            }
        }

        u+=(f-i);
        int h=ar[i];
        ar.erase(ar.begin()+f);
        ar.insert(ar.begin()+i,h);
    }

    cout<<u<<endl;
    
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
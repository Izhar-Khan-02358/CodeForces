#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+5;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n);
    int u=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        while(ar[i]%2==0){
            u++;
            ar[i]/=2;
        }
    }

    if(u>=n){
        cout<<0<<endl;
        return;
    }

    vector<int>v;
    for(int i=n;i>0;i--){
        int c=0;
        int g=i;
        while(g%2==0){
            c++;
            g/=2;
        }

        if(c>0){
            v.push_back(c);
        }
    }

    sort(v.rbegin(),v.rend());

    int p=0;
    for(int x:v){
        u+=x;
        p++;
        if(u>=n){
            cout<<p<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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
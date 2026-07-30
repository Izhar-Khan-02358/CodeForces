#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'
#define sorta(v) sort((v).begin(), (v).end())
#define sortd(v) sort((v).rbegin(), (v).rend())

const int N=2*(1e5)+5;

void solve() {
    int n,k;
    cin>>n>>k;

    if((2*k)>(n-1)){
        cout<<-1<<endl;
        return;
    }

    int l=0;
    int m=k*n;
    cout<<m<<endl;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(v[i]<k){
                cout<<i<<" "<<j<<endl;
                v[i]++;
                l++;
            }else if(v[j]<k){
                cout<<j<<" "<<i<<endl;
                v[j]++;
                l++;
            }

            if(l==m){
                return;
            }
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
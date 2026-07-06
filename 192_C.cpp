#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=3*(1e5)+1;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    int g=1;
    vector<int>cr;
    for(int i=1;i<n;i++){
        if(ar[i]==ar[i-1]){
            g++;
        }else{
            cr.push_back(g);
            g=1;
        }
    }
    cr.push_back(g);

    sort(cr.begin(),cr.end());
    int l=cr.size();
    int s=0;
    int r=0;
    for(int i=1;i<=l;i++){
        int p=cr[l-i];
        int q=0;

        if(i!=l){
            q=cr[l-i-1];
        }

        s+=p;

        if(q<p){
            int u=k-s;
            if(u%i==0){
                int j=u/i;

                if(j>-p){
                    r++;
                }
            }
        }
    }

    cout<<r<<endl;
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
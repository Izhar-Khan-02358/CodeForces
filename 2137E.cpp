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
    vector<int>br(n+1,0);
    for(int i=0;i<n;i++){
        cin>>ar[i];
        br[ar[i]]++;
    }

    sort(ar.begin(),ar.end());

    int u=-1;
    for(int i=0;i<=n;i++){
        if(br[i]==0){
            u=i;
            break;
        }
    }

    int m=-1;
    for(int i=0;i<u;i++){
        if(br[i]>1){
            m=i;
            break;
        }
    }

    int s=0;

    if(k==1){
        for(int i=0;i<n;i++){
            if(ar[i]<u && br[ar[i]]==1){
                s+=ar[i];
            }else{
                s+=u;
            }
        }
    }else{
        if(m==-1){
            s+=(u*(u-1))/2;
            int r=n-u;

            if(r==1){
                s+=u;
            }else if(r>1){
                if(k%2){
                    s+=r*u;
                }else{
                    s+=(r*(u+1));
                }
            }
        }else{
            s+=(m*(m-1))/2;

            int r=n-m;

            if(k%2){
                s+=(r*(m+1));
            }else{
                s+=r*m;
            }
        }
    }

    cout<<s<<endl;
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
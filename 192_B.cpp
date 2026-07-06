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
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    vector<int>a(n),b(n);
    int f=0;
    int s=0;

    for(int i=0;i<n;i++){
        if(ar[i]==1){
            f++;
        }else{
            f--;
        }

        if(ar[i]==3){
            s--;
        }else{
            s++;
        }

        a[i]=f;
        b[i]=s;
    }
    
    vector<int>c(n);
    c[n-2]=b[n-2];
    for(int i=n-3;i>=1;i--){
        c[i]=max(c[i+1],b[i]);
    }
    for(int i=0;i<n-2;i++){
        if(a[i]>=0 && b[i]<=c[i+1]){
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
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
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        int m=LLONG_MAX;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        sort(ar,ar+n);

        int u=ar[0];
        for(int i=1;i<n;i++){
            m=min(m,ar[i]-ar[0]);
        }
        int a=max(u,m);
        cout<<a<<endl;

    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

signed main(){
    int n;
    cin>>n;
    map<int,int>mp1;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        int u;
        cin>>u;
        mp1[u]=i;
    }

    for(int i=0;i<n;i++){
        int u;
        cin>>u;
        ar[mp1[u]]=i;
    }

    int ans=0;
    int mx=ar[0];

    for(int i=1;i<n;i++){
        if(ar[i]<mx) ans++;

        mx=max(mx,ar[i]);
    }

    cout<<ans<<endl;

    return 0;
}
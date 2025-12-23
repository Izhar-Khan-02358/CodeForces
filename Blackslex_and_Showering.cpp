#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int ts=0;
        for(int i=0;i<n-1;i++){
            ts+=abs(a[i]-a[i+1]);
        }
        int s=ts;
        int f=abs(a[0]-a[1]);
        int l=abs(a[n-2]-a[n-1]);
        int sb=max(f,l);
        s=min(s,ts-sb);

        for(int i=1;i<n-1;i++){
            int p=abs(a[i-1]-a[i]);
            int q=abs(a[i]-a[i+1]);
            int r=abs(a[i-1]-a[i+1]);
            int u=ts-p-q+r;
            s=min(s,u);
        };

        cout<<s<<endl;
    }
    return 0;
}
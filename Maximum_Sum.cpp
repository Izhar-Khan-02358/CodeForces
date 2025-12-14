#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        int fs=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        sort(a.begin(),a.end());

        vector<int>p(n+1,0);

        for(int i=1;i<=n;i++){
            p[i]=p[i-1]+a[i-1];
        }

        for(int i=0;i<=k;i++){
            int s=k-i;
            int l=2*i;
            int r=n-s-1;

            int sum=p[r+1]-p[l];

            fs=max(fs,sum);
        }

        cout<<fs<<endl;
    }
    return 0;
}
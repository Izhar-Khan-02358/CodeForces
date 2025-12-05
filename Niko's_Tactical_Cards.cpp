#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        int u=0;
        int v=0;

        for(int i=0;i<n;i++){
            int rc1=u-a[i];
            int rc2=v-a[i];
            int bc1=b[i]-u;
            int bc2=b[i]-v;

            int mr=min(rc1,bc2);
            int mb=max(bc1,rc2);

            u=mr;
            v=mb;
        }

        cout<<v<<endl;
    }
    return 0;
}
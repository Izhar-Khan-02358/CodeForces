#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int a[n];
        int x[q];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<q;i++){
            cin>>x[i];
        }
        int pm=INT32_MAX;
        for(int j=0;j<q;j++){
            if(x[j]>=pm){
                continue;
            }

            int u=pow(2,x[j]);
            for(int i=0;i<n;i++){
                if(a[i]%u==0){
                    a[i]+=(u/2);
                }
            }

            pm=x[j];
        }

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }cout<<endl;

    }
    return 0;
}
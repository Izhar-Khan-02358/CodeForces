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
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);

        int p[n];
        p[0]=ar[0];
        for(int i=1;i<n;i++){
            p[i]=p[i-1]+ar[i];
        }

        if(ar[0]!=1){
            cout<<"NO"<<endl;
            continue;
        }

        int u=0;
        for(int i=1;i<n;i++){
            if(ar[i]>p[i-1]){
                u=1;
                break;
            }
        }

        if(u==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);

        int u=0;

        int i=0;
        int j=1;
        while(j<n){
            int d=ar[j]-ar[i];

            if(d==k){
                u=1;
                break;
            }else if(d<k){
                j++;
            }else{
                i++;
            }

            if(i==j){
                j++;
            }
        }

        if(u==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
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

        int u=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(__gcd(ar[i],ar[j])<=2){
                    u=1;
                    break;
                }
            }
        }

        if(u==1){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
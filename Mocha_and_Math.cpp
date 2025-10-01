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
        int u=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(i==0){
                u=ar[i];
            }else{
                u=u&ar[i];
            }
        }
        cout<<u<<endl;
    }
    return 0;
}
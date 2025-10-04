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
        int a=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int i=0;i<n;i++){
            if(i>0 && i<n-1){
                if(ar[i]>ar[i+1] && ar[i]>ar[i-1]){
                    u=1;
                    a=i;
                    break;
                }
            }
        }
        if(u>0){
            cout<<"YES"<<endl;
            cout<<a<<" "<<a+1<<" "<<a+2<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
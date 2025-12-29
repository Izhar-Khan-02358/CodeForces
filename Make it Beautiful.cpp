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
        if(ar[0]==ar[n-1]){
            cout<<"NO"<<endl;
            continue;
        }else{
            cout<<"YES"<<endl;
            cout<<ar[n-1]<<" ";
            for(int i=0;i<n-1;i++){
                cout<<ar[i]<<" ";
            }cout<<endl;
        }
    }

    return 0;
}
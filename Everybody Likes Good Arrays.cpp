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
        for(int i=1;i<n;i++){
            if(ar[i]%2==ar[i-1]%2){
                u++;
            }
        }

        cout<<u<<endl;

    }
    return 0;
}
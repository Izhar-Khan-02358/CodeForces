#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c=0;
        int u=0;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        for(int i=0;i<n;i++){
            if(ar[i]==0){
                c++;
            }else{
                c=0;
            }

            u=max(u,c);
        }

        cout<<u<<endl;
    }
    return 0;
}
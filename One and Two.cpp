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
            if(ar[i]==2){
                u++;
            }
        }

        if(u%2!=0){
            cout<<-1<<endl;
            continue;
        }

        int v=0;
        int a=1;
        for(int i=0;i<n;i++){
            if(ar[i]==2){
                v++;
                if(v==u/2){
                    a=i+1;
                    break;
                }
            }
        }

        cout<<a<<endl;
    }
    return 0;
}
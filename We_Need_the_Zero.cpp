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
        int a=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            a=a^ar[i];
        }

        if(n%2!=0){
            cout<<a<<endl;
        }else{
            if(a==0){
                cout<<a<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}
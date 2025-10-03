#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int u=0;
        int i=0;
        while(n>2){
            if(n%2==0){
                n=n/2;
            }else{
                u=1;
                break;
            }
            i++;
        }
        if(u==0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
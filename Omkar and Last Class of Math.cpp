#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int d = 1;

        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                d = n/i;
                break;
            }
        }

        cout<<d<<" "<<n-d<<endl;
    }
}
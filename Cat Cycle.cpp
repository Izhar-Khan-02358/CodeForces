#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int a=0;
        
        int u=n%2;

        if(u==0){
            a=k%n;
            if(a==0){
                cout<<n<<endl;
            }else{
                cout<<a<<endl;
            }
        }else{
            int u=(k-1)/(n/2);
            int v=u+k-1;
            int a=v%n+1;
            cout<<a<<endl;
        }

    }
    return 0;
}
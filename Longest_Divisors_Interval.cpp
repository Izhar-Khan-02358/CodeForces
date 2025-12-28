#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int i=1;
        while(true){
            if(n%i==0){
                i++;
            }else{
                break;
            }
        }

        cout<<i-1<<endl;
    }
    return 0;
}
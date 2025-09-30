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
        int one=0;
        int zero=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]==0){
                zero++;
            }
            if(ar[i]==1){
                one++;
            }
        }
        int w=(pow(2,zero))*one;
        cout<<w<<endl;
    }
    return 0;
}
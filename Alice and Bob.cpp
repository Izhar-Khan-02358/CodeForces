#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n>>a;
        int ar[n];
        int l=0,r=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(a>ar[i]){
                l++;
            }
            if(a<ar[i]){
                r++;
            }
        }
         cout<<(l>r?a-1:a+1)<<endl;
    }
    return 0;
}
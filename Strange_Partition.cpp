#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int ar[n];
        int sum1=0;
        int sum2=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            sum1+=ar[i];
            sum2+=ar[i]/x + bool(ar[i]%x);
        }
        int min=sum1/x + bool(sum1%x);
        cout<<min<<" "<<sum2<<endl;
    }
    return 0;
}
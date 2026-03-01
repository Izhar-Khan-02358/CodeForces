#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    vector<int>ar(1e6+1,0);
    for(int i=2;i<=10000;i++){
        int c=i*i*i;
        int cv=(c-1)/(i-1);
        while(cv<=1e6){
            ar[cv]=1;
            c*=i;
            cv=(c-1)/(i-1);
        }
    }

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(ar[n]==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}
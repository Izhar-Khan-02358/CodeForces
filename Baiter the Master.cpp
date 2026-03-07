#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ar(n);
        map<int,int>m;
        int u=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            m[ar[i]]++;
            u^=ar[i];
        }

        if(u==0){
            cout<<"YES"<<endl;
            continue;
        }
        
        if(m[u]>0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
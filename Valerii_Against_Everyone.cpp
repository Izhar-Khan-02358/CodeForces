#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int b[n];
        map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>b[i];
            m[b[i]]++;
        }
        int u=1;
        for(int i=0;i<n;i++){
            if(m[b[i]]>1){
                u=0;
                break;
            }
        }
        if(u==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }

    }
    return 0;
}
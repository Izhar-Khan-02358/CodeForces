#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);

        int f=0;
        int m=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            f^=a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            m^=b[i];
        }
        int u=0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                u=max(i,u);
            }
        }
        
        if(m==f){
            cout<<"Tie"<<endl;
        }else if(u%2!=0){
            cout<<"Mai"<<endl;
        }else if(u%2==0){
            cout<<"Ajisai"<<endl;
        }
    }
    return 0;
}
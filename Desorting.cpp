#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int j=0;j<n;j++){
            cin>>a[j];
            b[j]=a[j];
        }
        sort(b.begin(),b.end());
        int u=INT32_MAX;
        for(int k=0;k<n-1;k++){
            int v=b[k+1]-b[k];
            if(v<u){
                u=v;
            }
        }
        
        if(a!=b){
            cout<<0<<endl;
        }else{
            cout<<u/2+1<<endl;
        }
    }
    return 0;
}
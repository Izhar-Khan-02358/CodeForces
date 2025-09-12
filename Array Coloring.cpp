#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        int k=0;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
            k+=a[j];
        }
        if(k%2==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
            
        }
    }
}
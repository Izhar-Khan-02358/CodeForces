#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        int ar[n];
        int c=0;
        for(int j=0;j<n;j++){
            cin>>ar[j];
 
            if(ar[j]==k){
                c=1;
            }
            
        }
        if(c==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
 
    }
    return 0;
}
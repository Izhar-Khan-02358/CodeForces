#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int u=0;u<t;u++){
        int n;cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        int a=ar[0];
        int b=ar[n-1];
        int c=0;
        int d=0;
        int r=0;
        for(int i=0;i<n;i++){
            if(ar[i]!=a and ar[i]!=b){
                r=1;
                break;}
            if(ar[i]==a){
                c+=1;
            }
            if(ar[i]==b){
                d+=1;
            }
        }
        if(r==0 and abs(c-d)<=1){cout<<"Yes"<<endl;}
        else{cout<<"No"<<endl;}
        }
    return 0;
}
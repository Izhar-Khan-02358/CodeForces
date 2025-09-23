#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=0;
        int ar[n];
        map<int,int>freq;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            freq[ar[i]]++;  
            x=max(x, freq[ar[i]]);
        }
        if(n==1 or x==n){
            cout<<0<<endl;
            continue;
        }
        int u=0;      
        int c=0; 
        int v=n-x;  
        while(x<n){
            c++;               
            int t=min(x,v);  
            u+=t;            
            v-=t;
            x+=t;                
        }
        cout<<c+u<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        int u=0;

        int i=0;
        int j=n-1;

        int a=0;
        int b=0;

        
        a+=ar[i];
        b+=ar[j];
        while(i<j){
            if(a==b){
                int k=i+1+n-j;
                u=max(u,k);
                i++;
                a+=ar[i];
            }
            if(a>b){
                j--;
                b+=ar[j];
            }
            if(b>a){
                i++;
                a+=ar[i];
            }
        }

        cout<<u<<endl;
    }
    return 0;
}
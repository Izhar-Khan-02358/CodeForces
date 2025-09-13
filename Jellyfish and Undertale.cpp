#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long a,b,n;
        cin>>a>>b>>n;
        long long ar[n];
        long long v=b;
        for(int j=0;j<n;j++){
            cin>>ar[j];
            if(ar[j]<=a-1){
                v+=ar[j];
            }else{
                v+=a-1;
            }
        }
        cout<<v<<endl;
        
    }
    return 0;
}
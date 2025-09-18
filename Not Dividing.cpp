#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]==1){
                ar[i]++;
            }
        }
        for(int k=1;k<=n;k++){
            if(ar[k]%ar[k-1]==0){
                ar[k]++;
            }
        }
        for(int j=0;j<n;j++){
            cout<<ar[j]<<" ";
        }cout<<"\n";
        
    }
    return 0;
}
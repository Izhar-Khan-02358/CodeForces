#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int r=2*(x-arr[n-1]);
        int u=0;
        for(auto k:arr){
            if(k-u>r){
                r=k-u;
            }
            u=k;
        }
        cout<<r<<endl;
    }
    return 0;
}

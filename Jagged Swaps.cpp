#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int r=0;
        vector<int>arr(n);
        for(auto &x:arr){
            cin>>x;
        }
        if(arr[0]==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }   
    }
    return 0;
}
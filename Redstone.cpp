#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        float b=0;
        float c=2/3;
        int r=0;
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        for(int u=0;u<n;u++){
            for(int c=u+1;c<n;c++){
                if(arr[u]==arr[c]){
                    r=2;
                }
            }
        }
        if(r==2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
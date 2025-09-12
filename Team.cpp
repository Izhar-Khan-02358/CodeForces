#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int u=0;
    int arr[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int x=0;
        for(int j=0;j<3;j++){
            x+=arr[i][j];
        }
        if(x>=2){
                u++;
            }
    }
    cout<<u<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    int a=0;
    int b=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
 
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
            a=i;
            b=j;
        }
        }
    }
 
    int v=abs(2-a);
    int u=abs(2-b);
    cout<<v+u<<endl;
    return 0;
}
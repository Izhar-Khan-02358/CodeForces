#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,k;
        cin>>x>>k;
        if(x%k!=0){
            cout<<1<<endl;
            cout<<x<<endl;
        }
        if(x%k==0){
            cout<<2<<endl;
            cout<<k+1<<" "<<x-(k+1)<<endl;
        }
    }
    return 0;
}
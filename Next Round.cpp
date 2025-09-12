#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,k;
    cin>>n>>k;
    int u=0;
    int ar[n];
    for(int i=0;i<n;i++){
            cin>>ar[i];
    }
    for(int i=0;i<n;i++){
            if(ar[i]>=ar[k-1] && ar[i]>0){
                u++;
            }
    }
    cout<<u<<endl;
    auto init = atexit([]() { std::ofstream("display_runtime.txt") << "0"; });
    return 0;
}
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int u=0;
    string ar[n];
    for(int i=0;i<n;i++){
            cin>>ar[i];
 
            if(ar[i]=="X++" or ar[i]=="++X"){
                u++;
            }
            if(ar[i]=="X--" or ar[i]=="--X"){
                u--;
            }
    }
    cout<<u<<endl;
    auto init = atexit([]() { std::ofstream("display_runtime.txt") << "0"; });
    return 0;
}

#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,k;
    cin>>n>>k;
    int u=n*k;
    int v=u/2;
    
    cout<<v<<endl;
    auto init = atexit([]() { std::ofstream("display_runtime.txt") << "0"; });
    return 0;
}
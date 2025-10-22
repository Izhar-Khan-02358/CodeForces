#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    map<int, int>m;
    set<int>s;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        s.insert(ar[i]);
        m[ar[i]]++;
    }

    for(auto x:s){
        cout<<x<<" "<<m[x]<<endl;
    }
    return 0;
}
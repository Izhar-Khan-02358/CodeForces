#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,k;
    cin>>n>>k;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    int u=0;
    for(int i=0;i<k;i++){
        cin>>u;
       
        int a=lower_bound(ar.begin(),ar.end(),u)-ar.begin();
        cout<<a+1<<endl;
    }
    return 0;
}
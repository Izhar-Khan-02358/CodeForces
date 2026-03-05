#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    sort(ar.begin(),ar.end());

    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        int l=lower_bound(ar.begin(),ar.end(),a)-ar.begin();
        int h=upper_bound(ar.begin(),ar.end(),b)-ar.begin();

        cout<<h-l<<" ";
    }cout<<endl;
    return 0;
}
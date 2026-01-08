#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int u=0;
        int n,q;
        cin>>n>>q;
        vector<int>ar(n);
        vector<int>v;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        vector<int>mx(n);
        mx[0] = ar[0];
        for(int i=1;i<n;i++){
            mx[i] = max(mx[i-1], ar[i]);
        }

        int p[n];
        p[0]=ar[0];

        for(int i=1;i<n;i++){
            p[i]=p[i-1]+ar[i];
        }

        int k[q];
        for(int i=0;i<q;i++){
            cin>>k[i];
        }

        for(int j=0;j<q;j++){
            int i=upper_bound(mx.begin(),mx.end(),k[j])-mx.begin();
            if(i==0){
                v.push_back(0);
            }else{
                v.push_back(p[i-1]);
            }
        }

        for(auto x:v){
            cout<<x<<" ";
        }cout<<endl;
    }
    return 0;
}
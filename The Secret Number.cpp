#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int>v;

        int d=11;
        while(n>=d){
            if(n%d==0){
                int u=n/d;
                v.push_back(u);
            }

            d=(d-1)*10+1;
        }

        reverse(v.begin(),v.end());
        int g=v.size();

        if(g==0){
            cout<<0<<endl;
            continue;
        }
        
        cout<<g<<endl;
        for(auto x:v){
            cout<<x<<" ";
        }cout<<endl;
    }
    return 0;
}
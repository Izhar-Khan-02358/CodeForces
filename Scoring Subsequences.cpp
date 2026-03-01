#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ar(n);
        vector<int>br;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        
        for(int i=0;i<n;i++){
            int l=1;int r=i+1;
            while(l<=r){
                int m=(l+r)/2;
                if(ar[i-m+1]>=m){
                    l=m+1;
                }else{
                    r=m-1;
                }
            }
            br.push_back(r);
        }

        for(auto x:br){
            cout<<x<<" ";
        }cout<<endl;
    }
    return 0;
}
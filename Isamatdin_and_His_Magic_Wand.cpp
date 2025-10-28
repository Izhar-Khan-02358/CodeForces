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
        int e=0;
        int o=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]%2==0){
                e++;
            }else{
                o++;
            }
        }

        if(e>0 && o>0){
            sort(ar.begin(),ar.end());
        }

        for(int i=0;i<n;i++){
            cout<<ar[i]<<" ";
        }cout<<endl;
    
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ar(n);
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        
        int u=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                u=max(ar[i]^ar[j],u);
            }
        }

        cout<<u<<endl;
    }
    return 0;
}
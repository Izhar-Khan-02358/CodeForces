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
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        ar.erase(unique(ar.begin(), ar.end()), ar.end());
        int sz=ar.size();

        if(sz==1){
            cout<<1<<endl;
            continue;
        }
        
        int u=2;
        for(int i=1;i<sz-1;i++){
            int p=ar[i]-ar[i-1];
            int q=ar[i+1]-ar[i];
            if((p>0 && q<0) or (p<0 && q>0)){
                u++;
            }
            
        }
        cout<<u<<endl;
    }
    return 0;
}
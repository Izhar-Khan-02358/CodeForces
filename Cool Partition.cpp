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
        set<int>a,b;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        
        int u=0;
        for(int i=0;i<n;i++){
            a.insert(ar[i]);
            b.insert(ar[i]);
            if(a.size()==b.size()){
                u++;
                b.clear();
            }
        }

        cout<<u<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        vector<int>br;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]!=i){
                br.push_back(ar[i]);
            }
        }

        int u=br[0];
        int m=br.size();
        for(int i=1;i<br.size();i++){
            u&=br[i];
        }

        cout<<u<<endl;
    }
    return 0;
}
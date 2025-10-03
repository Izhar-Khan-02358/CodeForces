#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int u=n;
        vector<int>ar(n);
        int br[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            br[i]=ar[i];
        }
        sort(br,br+n);
        for(int i=0;i<n-1;i++){
            if(br[i]==br[i+1]){
                u--;
            }else{
                continue;
            }
        }
        cout<<(2*u)-1<<endl;
    }
    return 0;
}
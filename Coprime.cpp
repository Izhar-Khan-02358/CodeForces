#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(1001,-1);
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            v[x]=i;
        }

        int u=-1;
        for(int i=1;i<=1000;i++){
            if(v[i]==-1){
                continue;
            }
            for(int j=1;j<=1000;j++){
                if(v[j]==-1){
                    continue;
                }

                if(__gcd(i,j)==1){
                    u=max(u,v[i]+v[j]);
                }
            }
            
        }

        cout<<u<<endl;
    }
    return 0;
}
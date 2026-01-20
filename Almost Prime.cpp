#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    cin>>n;

    vector<int>v(n+1,0);

    for(int i=2;i<=n;i++){
        if(v[i]==0){
            for(int j=i;j<=n;j+=i){
                v[j]++;
            }
        }
    }

    int u=0;
    for(int i=2;i<=n;i++){
        if(v[i]==2){
            u++;
        }
    }

    cout<<u<<endl;
    return 0;
}
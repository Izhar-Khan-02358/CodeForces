#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int u=0;
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        for(int i=1;i<n;i+=2){
            if(v[i-1]>v[i]){
                u+=(v[i-1]-v[i]);
                v[i-1]=v[i];
            }

            if(i<n-1 && (v[i+1]>v[i])){
                u+=(v[i+1]-v[i]);
                v[i+1]=v[i];
            }

            if(i<n-1 && ((v[i+1]+v[i-1])>v[i])){
                u+=((v[i+1]+v[i-1])-v[i]);
                v[i+1]=-v[i-1]+v[i];
            }
        }
        cout<<u<<endl;

    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);

        if(n%2){
            v[0]=n-1;
        }else{
            v[0]=n;
        }

        v[n-2]=1;
        v[n-1]=(n-1)^1;

        for(int i=1;i<n-2;i++){
            v[i]=(i+1)^1;
        }

        for(int x:v){
            cout<<x<<" ";
        }cout<<endl;
    }
    return 0;
}
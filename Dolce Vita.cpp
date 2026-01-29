#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>ar(n);
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar.begin(),ar.end());

        int a=0;
        int s=0;
        for(int i=0;i<n;i++){
            s+=ar[i];
            if(s<=x){
                a+=(x-s)/(i+1)+1;
            }
        }

        cout<<a<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,k;
    cin>>n>>k;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    int u=0;
    for(int i=0;i<k;i++){
        cin>>u;
        int a=n;
        int h=n-1;
        int l=0;
        while(l<=h){
            int m=l+((h-l)/2);
            if(ar[m]>u){
                h=m-1;
                a=min(a,m);
            }else if(ar[m]<=u){
                l=m+1;
            }
        }
        // int a=upper_bound(ar.begin(),ar.end(),u)-ar.begin();
        cout<<a<<endl;
    }
    return 0;
}
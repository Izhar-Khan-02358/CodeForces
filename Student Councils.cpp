#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

bool check(vector<int>&ar,int m,int k,int n){
    if(n<k){
        return false;
    }

    int u=k*m;
    int s=0;
    for(int i:ar){
        s+=min(i,m);
    }

    if(s>=u){
        return true;
    }else{
        return false;
    }


}

signed main(){
    int k,n;
    cin>>k;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar.begin(),ar.end());

    int h=(accumulate(ar.begin(),ar.end(),0LL))/k;
    int l=0;
    int ans=0;
    while(l<=h){
        int m=l+((h-l)/2);
        if(check(ar,m,k,n)){
            ans=m;
            l=m+1;
        }else{
            h=m-1;
        }
    }

    cout<<ans<<endl;
    return 0;
}
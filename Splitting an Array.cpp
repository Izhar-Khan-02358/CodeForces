#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

bool check(int m,vector<int>&ar,int k){
    int s=0;
    int g=1;
    for(auto x:ar){
       if(s+x<=m){
        s+=x;
       }else{
        g++;
        s=x;
       }

    }

    return g<=k;
}

signed main(){
    int n,k;
    cin>>n>>k;
    int sum=0;
    int mn=LLONG_MIN;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
        sum+=ar[i];
        mn=max(mn,ar[i]);
    }

    int h=sum;
    int l=mn;
    int ans=0;
    while(l<=h){
        int m=l+((h-l)/2);
        if(check(m,ar,k)){
            h=m-1;
            ans=m;
        }else{
            l=m+1;
        }
    }

    cout<<ans<<endl;
    return 0;
}
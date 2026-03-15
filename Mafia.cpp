#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

bool check(int sum,int m,int n){
    int u=(m*(n-1))-sum;
    
    return u>=0;
}

signed main(){
    int n;
    cin>>n;
    vector<int>ar(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        sum+=ar[i];
    }

    int l=*max_element(ar.begin(),ar.end());
    int h=n*l;
    int ans=0;
    while(l<=h){
        int m=l+((h-l)/2);
        if(check(sum,m,n)){
            h=m-1;
            ans=m;
            // cout<<m<<endl;
        }else{
            l=m+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
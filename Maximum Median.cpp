#include<bits/stdc++.h>
using namespace std;
#define int long long

bool check(int m,int k,int n,vector<int>ar){
    int u=0;

    for(int i=n/2;i<n;i++){
        if(ar[i]<m){
            u+=(m-ar[i]);
        }

        if(u>k){
            return false;
        }
    }
    return true;
}

signed main(){
    int n,k;
    cin>>n>>k;

    vector<int>ar(n),br;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar.begin(),ar.end());
    int md=n/2;
    
    int l=ar[md];
    int h=ar[n-1]+k;
    int ans=h;
    while(l<=h){
        int m=l+((h-l)/2);
        if(check(m,k,n,ar)){
            l=m+1;
            ans=m;
        }else{
            h=m-1;
        }
    }

    cout<<ans<<endl;
    return 0;
}
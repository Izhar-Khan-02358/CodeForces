#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

bool check(int m,vector<int>&ar,int n,int k){
    int u=0;
    int i=0;
    int j=1;
    while(j<n){
        if(ar[j]-ar[i]>=m){
            i=j;
            j++;
            u++;
        }else{
            j++;
        }
    }

    return u>=(k-1);

}

signed main(){
    int n,k;
    cin>>n>>k;
    vector<int>ar(n);
    int mn=LLONG_MAX;

    for(int i=0;i<n;i++){
        cin>>ar[i];

        if(i>0){
            mn=min(mn,ar[i]-ar[i-1]);
        }
    }



    int l=mn;
    int h=ar[n-1]-ar[0];
    int p=h/(k-1);
    int ans=0;
    while(l<=h){
        int m=l+((h-l)/2);
        // cout<<m<<endl;
        if(check(m,ar,n,k)){
            ans=m;
            l=m+1;
        }else{
            h=m-1;
        }
    }

    cout<<ans<<endl;
    return 0;
}
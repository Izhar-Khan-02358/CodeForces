#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

bool check(int m,vector<int>& ar,vector<int>& br,int k,int n){
    int u=0;
    for(int i=0;i<n;i++){
        int p=upper_bound(br.begin(),br.end(),m-ar[i])-br.begin();
        u+=p;
    }

    return u>=k;
}

signed main(){
    int n,k;
    cin>>n>>k;
    vector<int>ar(n),br(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        cin>>br[i];
    }

    sort(ar.begin(),ar.end());
    sort(br.begin(),br.end());
    int l=ar[0]+br[0];
    int h=ar[n-1]+br[n-1];

    int ans=0;
    while(l<=h){
        int m=l+((h-l)/2);
        if(check(m,ar,br,k,n)){
            h=m-1;
            ans=m;
        }else{
            l=m+1;
        }
    }

    cout<<ans<<endl;
    return 0;
}
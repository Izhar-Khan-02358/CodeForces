#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

bool check(ld m,vector<pair<int,int>>&ar,int k){
    vector<ld>br;
    for(auto x:ar){
        ld g=x.first-m*x.second;
        br.push_back(g);
    }

    sort(br.begin(),br.end());
    int n=br.size();
    ld sum=0;
    for(int i=1;i<=k;i++){
        sum+=br[n-i];
    }

    return sum>=0;
}

signed main(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i].first>>ar[i].second;
    }

    ld l=0;
    ld h=1e6;
    while(h-l>1e-6){
        ld m=l+((h-l)/2);
        if(check(m,ar,k)){
            l=m;
        }else{
            h=m;
        }
    }

    cout<<fixed<<setprecision(10)<<l<<endl;
    return 0;
}
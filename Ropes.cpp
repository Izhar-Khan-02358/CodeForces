#include<bits/stdc++.h>
using namespace std;
#define int long long

bool check(double u,int g,vector<int>& arr){
    int p=0;
    for(int x:arr){
        p+=(int)(x/u);
        if(p>=g){
            return true;
        }
    }

    return false;
}

signed main(){
    int n,k;
    cin>>n>>k;

    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    double l=0.0;
    double h=*max_element(ar.begin(),ar.end());
    while(h-l>1e-6){
        double mn=l+((h-l)/2);
        if(check(mn,k,ar)){
            l=mn;
        }else{
            h=mn;
        }
    }

    cout<<fixed<<setprecision(6)<<l<<endl;
    return 0;
}
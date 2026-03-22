#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ar(n);
        map<int,int>mp;
        int f=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];

            if(ar[i]!=0){
                f=1;
            }
            for(int j=0;j<31;j++){
                if(ar[i]&(1<<j)){
                    mp[j]++;
                }
            }
        }

        if(f==0){
            for(int i=0;i<n;i++){
                cout<<i+1<<" ";
            }cout<<endl;
            continue;
        }

        int g=0;
        for(auto i:mp){
            if(g==0){
                g=i.second;
            }else{
                g=__gcd(g,i.second);
            }
        }

        for(int i=1;i<=g;i++){
            if(g%i==0){
                cout<<i<<" ";
            }
        }cout<<endl;

        
    }
    return 0;
}
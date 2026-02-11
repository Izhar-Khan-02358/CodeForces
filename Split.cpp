#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ar(2*n);
        set<int>s;
        map<int,int>m;
        for(int i=0;i<2*n;i++){
            cin>>ar[i];
            s.insert(ar[i]);
            m[ar[i]]++;
        }

        int e=0;
        int o=0;
        int eo=0;
        int ee=0;

        for(auto x:s){
            if(m[x]%2!=0){
                o++;
            }else{
                e++;
                if((m[x]/2)%2!=1){
                    eo++;
                }else{
                    ee++;
                }
            }
        }

        int ans=0;
        ans+=(o+2*e);
        if(o==0 && eo%2==1){
            ans-=2;
        }

        cout<<ans<<endl;
    }
    return 0;
}
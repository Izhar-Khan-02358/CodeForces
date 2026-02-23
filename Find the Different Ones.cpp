#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ar(n+1);
        map<int,pair<int,int>>m;
        int u=0;

        int f=0;
        int l=0;
        for(int i=1;i<=n;i++){
            cin>>ar[i];
            if(i>1){
                if(ar[i]!=ar[i-1]){
                    m[i]={i-1,i};
                    f=i-1;
                    l=i;
                }else{
                    m[i]={f,l};
                }
            }
        }

        // for(auto x:m){
        //     cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<endl;
        // }
        int q;
        cin>>q;
        while(q--){
            int p,r;
            cin>>p>>r;
            int a=m[r].first;
            int b=m[r].second;
            // cout<<a<<" "<<b<<endl;
            if(a==0 && b==0){
                cout<<-1<<" "<<-1<<endl;
                // cout<<1<<endl;
            }else if(a<p or b>r){
                cout<<-1<<" "<<-1<<endl;
                // cout<<2<<endl;
            }else{
                cout<<a<<" "<<b<<endl;
            }
            
        }cout<<endl;
    }
    return 0;
}
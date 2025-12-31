#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>ar(n);
        vector<int>l(k+1,-1);
        vector<int>m1(k+1,0);
        vector<int>m2(k+1,0);
        
        int g=0;
        
        for(int i=0;i<n;i++){
            cin>>ar[i];

            g=i-l[ar[i]]-1;
            if(g>m1[ar[i]]){
                m2[ar[i]]=m1[ar[i]];
                m1[ar[i]]=g;
            }else if(g>m2[ar[i]]){
                m2[ar[i]]=g;
            }

            l[ar[i]]=i;
        }

        for(int i=1;i<=k;i++){
            g=n-l[i]-1;
            if(g>m1[i]){
                m2[i]=m1[i];
                m1[i]=g;
            }else if(g>m2[i]){
                m2[i]=g;
            }
        }

        int u=LLONG_MAX;
        for(int i=1;i<=k;i++){
            u=min(u,max(m1[i]/2,m2[i]));
        }

        cout<<u<<endl;

    }
    return 0;
}
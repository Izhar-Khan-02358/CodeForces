#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>ar(m);
        vector<int>br;
        for(int i=0;i<m;i++){
            cin>>ar[i];
        }

        sort(ar.begin(),ar.end());

        for(int i=0;i<m-1;i++){
            int u=ar[i+1]-ar[i]-1;
            br.push_back(u);
        }

        int v=ar[0]+n-ar[m-1]-1;
        br.push_back(v);

        sort(br.rbegin(),br.rend());

        int s=0;
        int d=0;
        for(auto x:br){
            int g=x-2*d;
            if(g>0){
                s++;
                g-=2;

                if(g>0){
                    s+=g;
                }

                d+=2;
            }
        }
        cout<<n-s<<endl;
    }
    return 0;
}
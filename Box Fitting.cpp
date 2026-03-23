#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,w;
        cin>>n>>w;
        vector<int>ar(21);
        for(int i=0;i<n;i++){
            int u;
            cin>>u;

            int v=log2(u);
            ar[v]++;
        }

        int ans=0;
        int h=0;
        while(h<n){
            int y=w;
            for(int i=20;i>=0;i--){
                while(ar[i]>0 && (1<<i)<=y){
                    y-=(1<<i);
                    ar[i]--;
                    h++;
                }
            }

            ans++;
        }

        cout<<ans<<endl;

    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>ar;
        for(int i=0;i<n;i++){
            int u;
            cin>>u;
            ar.push_back({u,i+1});
        }

        sort(ar.begin(),ar.end());

        int a=0;
        int m=2*n;
        for(int i=0;i<n-1;i++){
            int u=0;
            for(int j=i+1;j<n;j++){
                int p=ar[i].first*ar[j].first;
                if(p>m){
                    break;
                }else{
                    if(p==(ar[i].second+ar[j].second)){
                        a++;
                    }
                }
            }
        }

        cout<<a<<endl;
    }
    return 0;
}
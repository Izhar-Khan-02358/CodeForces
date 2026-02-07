#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int z=0;
        int p=0;
        set<int>s;
        map<int,int>m;
        vector<pair<int,int>>ar;
        vector<pair<int,int>>br;
        for(int i=0;i<n;i++){
            int u;
            cin>>u;
            if(i>0 && u!=ar[0].first && z==0){
                z=u;
                p=i+1;
            }
            s.insert(u);
            ar.push_back({u,i+1});
        }

        if(s.size()<2){
            cout<<"NO"<<endl;
        }else{
           int h=ar[0].first;
           for(int i=1;i<n;i++){
            if(ar[i].first!=h){
                br.push_back({ar[0].second,ar[i].second});
            }
           }

           for(int i=1;i<n;i++){
            if(ar[i].first==ar[0].first){
                br.push_back({p,ar[i].second});
            }
           }


           cout<<"YES"<<endl;
           for(auto x:br){
            cout<<x.first<<" "<<x.second<<endl;
           }
        }

        
    
    }
    return 0;
}
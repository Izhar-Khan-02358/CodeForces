#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        vector<pair<int,int>>m;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int i=0;i<n;i++){
            m.push_back({ar[i],i+1});
        }

        sort(m.begin(),m.end());
        reverse(m.begin(),m.end());

        int y=m.size();
        int u=(n+1)/2;
        int br[n+1];
        br[0]=0;
        int tm=0;
        for(int i=0;i<m.size();i++){
           int ad=(i/2)+1;
           int p=(i%2==0)? ad:-ad;
           br[m[i].second]=p;

           tm+=2*m[i].first*abs(p);
        }
        cout<<tm<<endl;
        for(int i=0;i<n+1;i++){
            cout<<br[i]<<" ";
        }cout<<endl;
    }
    return 0;
}
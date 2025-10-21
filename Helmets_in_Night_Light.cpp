#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;

        int ar[n];
        int br[n];
        vector<pair<int,int>>g(n);
        
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        for(int i=0;i<n;i++){
            cin>>br[i];
        }
        for(int i=0;i<n;i++){
            g[i]={br[i],ar[i]};
        }

        sort(g.begin(),g.end());

        int fc=p;
        int fs=1;

        for(auto x:g){
            int cs=x.second;
            int c=x.first;

            if(c>=p){
                break;
            }
            if(fs+cs>n){
                fc+=(n-fs)*c;
                fs=n;
                break;
            }else{
                fc+=cs*c;
                fs+=cs;
            }
        }

        fc+=(n-fs)*p;
        cout<<fc<<endl;
    }
    return 0;
}


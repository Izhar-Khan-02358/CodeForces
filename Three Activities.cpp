#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),b(n),c(n);
        vector<pair<int,int>>ap(n),bp(n),cp(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            ap.push_back({a[i],i});
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            bp.push_back({b[i],i});
        }
        for(int i=0;i<n;i++){
            cin>>c[i];
            cp.push_back({c[i],i});
        }

        sort(ap.rbegin(),ap.rend());
        sort(bp.rbegin(),bp.rend());
        sort(cp.rbegin(),cp.rend());

        int u=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    int p=ap[i].second;
                    int q=bp[j].second;
                    int r=cp[k].second;

                    int f=ap[i].first;
                    int g=bp[j].first;
                    int h=cp[k].first;

                    int v=f+g+h;

                    if(p==q or q==r or p==r){
                        continue;
                    }else{
                        u=max(u,v);
                    }

                }
            }
        }

        cout<<u<<endl;

    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>ar(n);
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        sort(ar.begin(),ar.end());
        ar.erase(unique(ar.begin(), ar.end()), ar.end());

        int m=ar.size();
        vector<int>br;
        vector<int>cr(m,0);

        int u=0;
        for(int i=0;i<m;i++){

            if(cr[i]==1) continue;

            int p=ar[i];
            br.push_back(p);

            int r=k/p;

            if(r>n){
                u=1;
                break;
            }

            for(int j=1;j<=r;j++){
                int v=p*j;

                auto h =lower_bound(ar.begin(),ar.end(),v);


                if(h==ar.end() or *h!=v){
                    u=1;
                    break;
                }

                int id=h-ar.begin();
                cr[id]=1;
            }
        }

        if(u==1){
            cout<<-1<<endl;
            continue;
        }

        cout<<br.size()<<endl;
        for(int u:br){
            cout<<u<<" ";
        }cout<<endl;
    }
    return 0;
}
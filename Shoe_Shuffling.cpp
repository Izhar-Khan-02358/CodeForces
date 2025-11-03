#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ar;
        map<int,int>m;

        for(int i=0;i<n;i++){
            int u=0;
            cin>>u;
            ar.push_back(u);
            m[u]++;
        }
        int v=0;
        for(auto x:ar){
            if(m[x]==1){
                v=1;
                break;
            }
        }
        int k[n];
        for(int i=0;i<n;i++){
            k[i]=i+1;
        }
        if(v==0){
            for(int i=0;i<n-1;i++){
                if(ar[i]==ar[i+1]){
                    swap(k[i],k[i+1]);
                }
            }

            for(int i=0;i<n;i++){
                cout<<k[i]<<" ";
            }
            cout<<endl;
            
        }else{
            cout<<-1<<endl;
        }

    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>b(n);
        map<int,vector<int>>v;
        map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>b[i];
            m[b[i]]++;
        }

        int h=1;
        int u=0;
        for(auto x:m){
            int p=x.first;
            int q=x.second;

            if(q%p!=0){
                u=1;
                break;
            }else{
                for(int j=1;j<=(q/p);j++){
                    for(int k=1;k<=p;k++){
                        v[p].push_back(h);
                    }
                    h++;
                }
            }
        }

        if(u==1){
            cout<<-1<<endl;
            continue;
        }else{
            map<int,int>ptr;
            for(int i=0;i<n;i++){
                cout<<v[b[i]][ptr[b[i]]]<<(i==n-1?"":" ");
                ptr[b[i]]++;
            }cout<<endl;
        }


    }
    return 0;
}
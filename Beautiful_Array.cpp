#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,b,s;
        cin>>n>>k>>b>>s;
        vector<int>ar;
        int m=k*b;
        int u=k*b+(k-1)*n;
        if(s>=m && s<=u){
            int h=min(s,k*b + (k-1));
            ar.push_back(h);
            s-=h;
            for(int i=1;i<n;i++){
                int y=min(k-1,s);
                ar.push_back(y);
                s-=y;
            }

            for(int i=0;i<ar.size();i++){
                cout<<ar[i]<<" ";
            }cout<<endl;
        }else{
            cout<<-1<<endl;
            continue;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
        int n,k,x;
        cin>>n>>k>>x;
        vector<int>ar(n);
        vector<int>gr;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        sort(ar.begin(),ar.end());

        for(int i=0;i<n-1;i++){
            int u=ar[i+1]-ar[i];
            if(u>x){
                gr.push_back(u);
            }
        }

        int g=gr.size()+1;

        sort(gr.begin(),gr.end());
        

        for(auto y:gr){
            int d=(y/x)+bool(y%x)-1;
            if(k>=d){
                k-=d;
                g--;
            }
        }

        cout<<g<<endl;
    return 0;
}
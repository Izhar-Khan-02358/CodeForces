#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>ar(n);
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        vector<int>b=ar;
        sort(b.begin(),b.end());

        vector<int>c;
        int t=0;
        int s=0;
        int l=0;
        int r=n-1;
        while(r>=l){
            int u=s%x;
            int g=x-u;
            if(b[l]<g){
                s+=b[l];
                c.push_back(b[l]);
                l++;
            }else{
                t+=b[r];
                s+=b[r];
                c.push_back(b[r]);
                r--;
            }
        }

        cout<<t<<endl;
        for(int i=0;i<n;i++){
            cout<<c[i]<<" ";
        }cout<<endl;
    }
    return 0;
}
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
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        vector<int>p(n);
        vector<int>s(n);
        p[0]=ar[0];
        for(int i=1;i<n;i++){
            p[i]=min(p[i-1],ar[i]);
        }

        s[n-1]=ar[n-1];
        for(int i=n-2;i>=0;i--){
            s[i]=max(s[i+1],ar[i]);
        }

        int u=0;
        for(int i=0;i<n-1;i++){
            if(p[i]>s[i+1]){
                u=1;
                break;
            }
        }

        if(u==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }

    }
    return 0;
}
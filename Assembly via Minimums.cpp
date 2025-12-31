#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p=((n-1)*n)/2;
        vector<int>a(n);
        vector<int>b(p);
        
        for(int i=0;i<p;i++){
            cin>>b[i];
        }

        sort(b.begin(),b.end());

        int u=n-1;
        int i=0;

        while(u>0){
            cout<<b[i]<<" ";

            i+=u;
            u--;
        }

        cout<<b[p-1]+1<<endl;
    }
    return 0;
}
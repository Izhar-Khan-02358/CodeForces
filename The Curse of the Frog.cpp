#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        vector<int>b(n);
        vector<int>c(n);
        int m=0;
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i]>>c[i];
            m=max(m,a[i]*b[i]-c[i]);
            x-=a[i]*(b[i]-1);
        }

        if(x<=0){
            cout<<0<<endl;
            continue;
        }

        if(m<=0){
            cout<<-1<<endl;
            continue;
        }

        cout<<(x+m-1)/m<<endl;
        
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        
        int g=b;
        int c=LLONG_MAX;
        int k=0;
        while(k<=40){
            int d=b+k;
            if(d==1){
                k++;
                continue;
            }
            int v=k;
            int u=a;
            while(u>0){
                u=u/d;
                v++;
            }
            c=min(c,v);
            k++;
        }    

        cout<<c<<endl;
    }
    return 0;
}
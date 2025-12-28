#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(d<b){
            cout<<-1<<endl;
            continue;
        }

        int m=d-b;

        a+=m;

        if(a<c){
            cout<<-1<<endl;
            continue;
        }

        m+=(a-c);
        cout<<m<<endl;
    }
    return 0;
}
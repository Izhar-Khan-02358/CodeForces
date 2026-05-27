#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

signed main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;

        int u=0;
        int n=1000000000000LL;
        if(y==1 or k==n){
            cout<<-1<<endl;
            continue;
        }

        for(int i=0;i<x;i++){
            k+=(k-1)/(y-1);

            if(k>n){
                u=1;
                break;
            }
        }

        if(u==1){
            cout<<-1<<endl;
        }else{
            cout<<k<<endl;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        string s;
        cin>>s;
        int sum=0;
        int p[n];
        for(int i=0;i<n;i++){
            cin>>p[i];
            sum+=p[i];
        }

        int a=0;
        int b=0;
        int ad=0;
        int bd=0;
        for(int i=0;i<n;i++){
            int f=(p[i]/2)+1;
            if(s[i]=='0'){
                a+=f;
                ad++;
            }else{
                b+=f;
                bd++;
            }
        }

        int u=0;
        if(x<a or y<b){
            u=1;
        }
        if(x+y<sum){
            u=1;
        }
        if(ad==0 && y<x+n){
            u=1;
        }
        if(bd==0 && x<y+n){
            u=1;
        }

        if(u==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string u=s+s;
        int m=s.length();
        int n=u.length();
        int c=0;
        int d=0;

        int z=0;
        int o=0;
        for(int i=0;i<m;i++){
            if(s[i]=='0'){
                z=1;
            }else{
                o=1;
            }
        }

        if(z==0){
            cout<<m*m<<endl;
            continue;
        }else if(o==0){
            cout<<0<<endl;
            continue;
        }else{
            for(int i=0;i<n;i++){
            if(u[i]=='0'){
                c=0;
            }else if(u[i]=='1' && c==0){
                c=1;
            }else if(u[i]=='1' && c!=0){
                c++;
            }
            d=max(d,c);
        }
        }

        int p=(d+1)/2;
        int q=(d+2)/2;

        cout<<p*q<<endl;
    }
    return 0;
}
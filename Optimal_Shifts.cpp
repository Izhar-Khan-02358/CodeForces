#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                a=1;
            }
        }

        if(a==0){
            cout<<0<<endl;
            continue;
        }
        string u= s+s;

        int o=-1;
        int md=0;

        for(int i=0;i<2*n;i++){
            int d=0;
            if(u[i]=='1'){
                o=i;
                d=0;
            }else{
                if(o>-1){
                    d=i-o;
                }
            }

            if(o>-1){
                md=max(md,d);
            }
        }

        cout<<md<<endl;
    }
    return 0;
}
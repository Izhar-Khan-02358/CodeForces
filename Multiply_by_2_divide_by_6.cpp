#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int u=0;
        int v=0;
        if(n==1){
            cout<<0<<endl;
            continue;
        }else if(n%3!=0){
            v=0;
        }else{
            while(n%3==0){
                if(n%6==0){
                    n=n/6;
                    u++;
                }
                if(n%6!=0 && n%3==0){
                    n=n*2;
                    u++;
                }
            }
            if(n==1){
                v=1;
            }
        }
        if(v==1){
            cout<<u<<endl;
        }else{
            cout<<-1<<endl;
        }

    }
    return 0;
}
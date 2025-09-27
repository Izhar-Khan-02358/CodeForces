#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    
    while(t--){
        int x,n;
        cin>>x>>n;
        int u=0;
        if(x%2==0){
            int r=n%4;
             if(n%4==0){
                u=x;
            }
            if(n%4==1){
                u=x-n;
            }
            if(n%4==2){
                u=x+1;
            }
            if(n%4==3){
                u=x+(n+1);
            }

        }
        if(x%2!=0){
            int r=n%4;
             if(n%4==0){
                u=x;
            }
            if(n%4==1){
                u=x+n;
            }
            if(n%4==2){
                u=x-1;
            }
            if(n%4==3){
                u=x-(n+1);
            }
        }
        cout<<u<<endl;
    }
    return 0;
}


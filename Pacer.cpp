#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m;
        int p=0;
        int q=0;
        int u=0;
        while(n--){
            cin>>x>>y;
            u+=x-p;
            if(abs(x-p)%2!=abs(y-q)%2){
                u--;
            }
            p=x;
            q=y;
        }
        if(p!=m){
            u+=m-p;
        }

        cout<<u<<endl;
    }
    return 0;
}
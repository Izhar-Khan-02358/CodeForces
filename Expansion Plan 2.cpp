#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int u=abs(x);
        int v=abs(y);
        int m=u+v;
        string s;
        cin>>s;

        if(u>n or v>n){
            cout<<"NO"<<endl;
            continue;
        }

        int f=0;
        for(int x:s){
            if(x=='4'){
                f++;
            }
        }

        if(f==0){
            cout<<"YES"<<endl;
            continue;
        }


        int w=2*n-f;
        // cout<<w<<" "<<m<<endl;
        if(m-w>0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
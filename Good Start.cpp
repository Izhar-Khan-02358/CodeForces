#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int w,h,a,b,p,q,r,s;
        cin>>w>>h>>a>>b;
        cin>>p>>q>>r>>s;

        if(p==r){
            if(abs(q-s)%b==0){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }else if(q==s){
            if(abs(p-r)%a==0){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }else if(abs(p-r)%a==0 or abs(q-s)%b==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
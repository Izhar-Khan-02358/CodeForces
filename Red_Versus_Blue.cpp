#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    int r,b;
    cin>>n>>r>>b;
    int y=b+1;
    int u=r/y;
    int v=r%y;

    int l=0;
    string s="";
    while(y--){
        for(int i=0;i<u;i++){
            s+='R';
            l++;
        }
        if(v>0 && l<n){
                s+='R';
                v--;
                l++;
            }
        if(b>0 && l<n){
            s+='B';
            l++;
            b--;
        }
    }
    
    cout<<s<<endl;
    }
    return 0;
}
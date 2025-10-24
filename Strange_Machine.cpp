
//Code works but give TLE

#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        int ar[q];
        for(int i=0;i<q;i++){
            cin>>ar[i];
        }

        for(int i=0;i<q;i++){
            int u=ar[i];
            
            int g=0;
            int h=0;

            while(u>0){
                if(s[h]=='A'){
                    u-=1;
                }else{
                    u/=2;
                }
                h=(h+1)%n;
                g++;
            }

            cout<<g<<endl;
        }
    }
    return 0;
}
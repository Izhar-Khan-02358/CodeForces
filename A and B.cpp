#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    int m=0;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        vector<int>b;
        vector<int>a;
        int d=0;

        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                a.push_back(i);
            }
        }

        int as=a.size()-1;
        int am=as/2;
        int v=0;
        for(int i=0;i<a.size();i++){
            if(am!=i){
                d=abs(a[am]-a[i])-abs(i-am);
                v+=d;
            }
        }

        for(int i=0;i<n;i++){
            if(s[i]=='b'){
                b.push_back(i);
            }
        }

        int bs=b.size()-1;
        int bm=bs/2;
        int u=0;
        for(int i=0;i<b.size();i++){
            if(bm!=i){
                d=abs(b[bm]-b[i])-abs(i-bm);
                u+=d;
            }
            
        }

        cout<<min(u,v)<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                c++;
            }
        }

        if(c==0){
            cout<<k<<endl;
            continue;
        }
        vector<int>p(n+1,0);
        vector<int>q;
        
        for(int i=0;i<n;i++){
            if(s[i]=='W'){
                p[i+1]=p[i]+1;
            }else{
                p[i+1]=p[i];
            }
        }
        int a=LLONG_MAX;
        for(int i=0;i<=n-k;i++){
            int y=p[i+k]-p[i];
            a=min(a,y);
        }

        cout<<a<<endl;
    } 
    return 0;
}



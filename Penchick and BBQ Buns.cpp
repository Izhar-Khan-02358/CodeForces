#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        if(n%2 && n<27){
            cout<<-1<<endl;
            continue;
        }
        int u=1;
        vector<int>v(n+1,0);
        
        if(n%2){
            v[1]=1;
            v[10]=1;
            v[26]=1;

            v[23]=2;
            v[27]=2;

            u=3;
        }

        int f=0;
        for(int i=1;i<=n;i++){
            if(v[i]==0){
                v[i]=u;
                f++;
            }

            if(f==2){
                f=0;
                u++;
            }
        }

        for(int i=1;i<=n;i++){
            cout<<v[i]<<" ";
        }cout<<"\n";
        
    }
    return 0;
}
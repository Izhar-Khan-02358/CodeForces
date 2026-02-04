#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>ar(n);
        map<int,int>p;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            int u=ar[i]%m;
            p[u]++;
        }

        int a=0;
        for(int i=0;i<m;i++){
            int x=p[i];
            int y=p[(m-i)%m];
            if(x==0 && y==0){
                continue;
            }

            int h=min(x,y);

            x-=min(h+1,x);
            y-=min(h+1,y);

            a++;

            a+=(x+y);

            p[i]=0;
            p[(m-i)%m]=0;


        }
        cout<<a<<endl;
    }
    return 0;
}
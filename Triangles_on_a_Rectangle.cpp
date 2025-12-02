#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int w,h;
        cin>>w>>h;


        int a;
        cin>>a;
        int ara[a];
        for(int i=0;i<a;i++){
            cin>>ara[i];
        }
        int x1=ara[a-1]-ara[0];

        int b;
        cin>>b;
        int arb[b];
        for(int i=0;i<b;i++){
            cin>>arb[i];
        }
        int x2=arb[b-1]-arb[0];

        int c;
        cin>>c;
        int arc[c];
        for(int i=0;i<c;i++){
            cin>>arc[i];
        }
        int y1=arc[c-1]-arc[0];

        int d;
        cin>>d;
        int ard[d];
        for(int i=0;i<d;i++){
            cin>>ard[i];
        }
        int y2=ard[d-1]-ard[0];

        
        
        int x=max(x1,x2);
        int y=max(y1,y2);
        
        int ans=max(x*h,y*w);

        cout<<ans<<endl;
        
    }
    return 0;
}
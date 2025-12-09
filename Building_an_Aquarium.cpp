#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        cin>>x;
        int e=0;
        int f=0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];

            if(i>0 && a[i]!=a[i-1]){
                e=1;
            }
            f=max(f,a[i]);
        }
        int q=f;
        if(n==1){
            cout<<a[0]+x<<endl;
            continue;
        }

        if(e==0){
            int k=x/n;
            cout<<a[0]+k<<endl;
            continue;
        }

        sort(a.begin(),a.end());
        vector<int> p(n);
        p[0]=a[0];
        for(int i=1;i<n;i++){
            p[i]=p[i-1]+a[i];
        }



        int l=1;
        int h=f+x;
        int v=1;
        while(l<=h){
            int e=(l+h)/2;
            int g=lower_bound(a.begin(),a.end(),e)-a.begin();

            int z=0;
            if(g>0){
                int wn=p[g-1];
                z=e*g-wn;
            }else{
                z=0;
            }

            if(z<=x){
                v=e;
                l=e+1;
            }else{
                h=e-1;
            }
        }
        cout<<v<<endl;
        }
    return 0;
}
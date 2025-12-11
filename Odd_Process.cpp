#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        vector<int>e;
        vector<int>o;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                e.push_back(a[i]);
            }else{
                o.push_back(a[i]);
            }
        }
        sort(e.begin(),e.end());
        sort(o.begin(),o.end());

        reverse(e.begin(),e.end());
        reverse(o.begin(),o.end());

        int el=e.size();
        int ol=o.size();

        vector<int>p(el+1,0);
        p[0]=0;
        for(int i=0;i<el;i++){
            p[i+1]=p[i]+e[i];
        }
        
        for(int i=1;i<=n;i++){
            int mo=max(1LL,i-el);

            if(mo%2==0){
                mo++;
            }

            if(mo>ol or mo>i){
                cout<<0<<" ";
            }else{
                int u=i-mo;
                int s=o[0]+p[u];
                cout<<s<<" ";
            }
        }cout<<endl;
        
    }
    return 0;
}
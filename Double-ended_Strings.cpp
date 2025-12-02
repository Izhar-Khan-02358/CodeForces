#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        string  a,b;
        cin>>a;
        cin>>b;
        int l=0;
        for(int i=1;i<=min(a.size(),b.size());i++){
            for(int j=0;j<=a.size()-i;j++){
                for(int k=0;k<=b.size()-i;k++){
                    string suba=a.substr(j,i);
                    string subb=b.substr(k,i);

                    if(suba==subb){
                        l=max(l,i);
                    }
                }
            }
        }

        cout<<a.size()+b.size()-2*l<<endl;
    }
    return 0;
}
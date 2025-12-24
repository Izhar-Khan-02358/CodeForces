#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int m=1e9 +7;
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        int p=0;
        vector<int>v;
        for(int i=1;i<=n;i++){
            int u=((l+i-1)/i)*i;
            v.push_back(u);

            if(u>r){
                p=1;
                break;
            }
        }

        if(p==1){
            cout<<"NO"<<endl;
            continue;
        }else{
            cout<<"YES"<<endl;
            for(auto x:v){
                cout<<x<<" ";
            }cout<<endl;
        }


        
    }
    return 0;
}
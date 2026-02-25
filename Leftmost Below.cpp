#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>br(n);
        vector<int>min;
        
        int h=-1;
        for(int i=0;i<n;i++){
            cin>>br[i];
        }
        
        int m=br[0];
        min.push_back(br[0]);
        int g=0;
        for(int i=1;i<n;i++){
            if(br[i]<m){
                m=br[i];
            }
            min.push_back(m);
        }

        for(int i=1;i<n;i++){
            if((br[i]-min[i])>=min[i]){
                g=1;
            }
        }

        if(g==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}
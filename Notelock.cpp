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
        int u=0;
        
        if(s[0]=='1'){
            u++;
        }
        for(int i=1;i<n;i++){
            if(s[i]=='1'){
                int w=k-1;  
                int y=0;   
                for(int j=i-1; w>0 && j>=0 ;j--, w--){
                    if(s[j]=='1'){
                        y=1;
                        break;
                    }
                }

                if(y==0){
                    u++;
                }
            }
        }
        cout<<u<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ar(n);
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        int ans=0;
        if(ar[0]!=-1 && ar[n-1]!=-1){
            ans=llabs(ar[n-1]-ar[0]);
            for(int i=0;i<n;i++){
                if(ar[i]==-1){
                    ar[i]=0;
                }
            }
        }else{
            ans=0;
            if(ar[0]==-1 && ar[n-1]==-1){
                for(int i=0;i<n;i++){
                    if(ar[i]==-1){
                        ar[i]=0;
                    }
                }
            }else if(ar[0]==-1){
                int v=ar[n-1];
                for(int i=0;i<n;i++){
                    if(ar[i]==-1){
                        ar[i]=0;
                    }
                }
                ar[0]=v;
            }else{ 
                int v=ar[0];
                for(int i=0;i<n;i++){
                    if(ar[i]==-1){
                        ar[i]=0;
                    }
                }
                ar[n-1]=v;
            }
        }
        cout<<ans<<endl;
        for(int i=0;i<n;i++){
            if(i)cout<<' ';
            cout<<ar[i];
        }
        cout<<endl;
    }
    return 0;
}

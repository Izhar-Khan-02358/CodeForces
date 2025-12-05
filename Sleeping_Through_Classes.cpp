#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        string s;
        cin>>n>>k>>s;

        vector<int>a(n,0);

        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                int r=min(n-1,i+k);
                for(int j=i;j<=r;j++){
                    a[j]=1;
                }
            }
        }

        int sl=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                sl++;
            }
        }

        cout<<sl<<endl;;
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string y=to_string(n);
        int v=y.length();
        int ans = LLONG_MAX;

        string p[4]={"00", "25", "50", "75"};

        for(int k=0;k<4;k++){ 
            string e=p[k];
            int c=0;
            int j=1; 
            for(int i=v-1;i>=0 && j>=0;i--){
                if(y[i]==e[j]){
                    j--;
                }else{
                    c++;
                }
            }
            if(j<0){ 
                if(c<ans){
                    ans=c;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
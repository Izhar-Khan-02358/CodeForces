#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;

        vector<int>a;
        int u=0;
        for(int i=0;i<n;i++){
            if(s[i]!=c){
                u=1;
            }
        }
        if(u==0){
            cout<<0<<endl;
            continue;
        }

        int f=0;
        int h=0;
        for(int i=n-1;i>=(n/2);i--){
            if(s[i]==c){
                f=1;
                h=i+1;
                break;
            }
        }

        if(f==1){
            cout<<1<<endl;
            cout<<h<<endl;
        }else{
            cout<<2<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
    }
    return 0;
}
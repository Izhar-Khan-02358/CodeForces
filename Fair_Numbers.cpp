#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        start:
        int u=n;
        set<int>s;
        while(u>0){
            int r=u%10;
            u/=10;
            if(r!=0){
                int h=n%r;
                if(h!=0){
                    n++;
                    goto start;
                }
            }
        }

        cout<<n<<endl;

    }
    return 0;
}
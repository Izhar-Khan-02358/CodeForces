#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        set<int>s;
        int v=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        int p=0;
        int u=1;
        while(true){
            s.clear();
            for(int i=0;i<n;i++){
                p=1LL<<u;
                int k=ar[i]%p;
                s.insert(k);
            }

            if(s.size()!=2){
                u++;
            }else{
                break;
            }
        }

        cout<<p<<endl;

    }
    return 0;
}
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
        for(int i=0;i<n;i++){
            cin>>ar[i];
            s.insert(ar[i]);
        }

        if(s.size()==1){
            cout<<0<<endl;
            continue;
        }
        int u=0;
        int c=1;
        start:
        for(int i=n-c;i>=0;i--){
            if(ar[i-1]==ar[n-1]){
                c++;
            }else{
                break;
            }
        }

        if(c<n){
            c*=2;
            u++;
            goto start;
        }else{
            cout<<u<<endl;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
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

        int i=0;
        int j=n-1;
        int u=1;
        int v=n;
        while(i<j){
            if(ar[i]==u){
                u++;
                i++;
            }else if(ar[i]==v){
                v--;
                i++;
            }else if(ar[j]==u){
                u++;
                j--;
            }else if(ar[j]==v){
                v--;
                j--;
            }else{
                cout<<++i<<" "<<++j<<endl;
                goto nc;
            }
        }

        cout<<-1<<endl;
        nc:;
    }
    return 0;
}
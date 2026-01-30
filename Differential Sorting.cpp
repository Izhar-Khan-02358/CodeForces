#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int g=0;
        vector<int>ar(n);
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(i>0 && ar[i]<ar[i-1]){
                g=1;
            }
        }

        if(g==0){
            cout<<0<<endl;
            continue;
        }

        if(ar[n-1]<ar[n-2]){
            cout<<-1<<endl;
            continue;
        }

        if(ar[n-1]>=0){
            cout<<n-2<<endl;

            for(int i=0;i<n-2;i++){
                cout<<i+1<<" "<<n-1<<" "<<n<<endl;
            }
        }else{
            if(is_sorted(ar.begin(),ar.end())){
                cout<<0<<endl;
            }else{
                cout<<-1<<endl;
            }
        }


    }
    return 0;
}
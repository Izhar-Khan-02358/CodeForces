#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        vector<int>a;
        vector<int>b;
        for(int i=0;i<n;i++){
            cin>>x;
            if(i%2==0){
                a.push_back(x);
            }else{
                b.push_back(x);
            }
        }

        int ag=a[0];
        int bg=b[0];

        for(int k:a){
            ag=__gcd(k,ag);
        }

        for(int k:b){
            bg=__gcd(k,bg);
        }

        int u=0;
        int v=0;
        int m=0;
        if(ag==bg){
            cout<<0<<endl;
            continue;
        }else{
            for(int x:b){
                if(x%ag==0){
                    v=1;
                }
            }

            for(int x:a){
                if(x%bg==0){
                    m=1;
                }
            }
            
        }

        if(v==1 && m==1){
            cout<<0<<endl;
        }else if(v==0){
            cout<<ag<<endl;
        }else if(m==0){
            cout<<bg<<endl;
        }

        
    }
    return 0;
}
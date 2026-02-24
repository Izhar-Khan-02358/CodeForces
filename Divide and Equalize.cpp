#include<bits/stdc++.h>
using namespace std;
#define int long long

int m=1e6+1;
vector<int>v(m+1,0);

int primefactor(){
    for(int i=2;i<=m;i++){
        if(v[i]==0){
            for(int j=i;j<=m;j+=i){
                if(v[j]==0){
                    v[j]=i;
                }
            }
        }
    }
}

signed main(){
    int t;
    cin>>t;
    primefactor();
    while(t--){
        int n;
        cin>>n;
        vector<int>ar(n);
        map<int,int>mp;
        int h=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];

            while(v[ar[i]]!=0){
                int u=v[ar[i]];
                while(ar[i]%u==0){
                    mp[v[ar[i]]]++;
                    ar[i]/=u;
                }
            }   
        }

        int f=0;
        for(auto x:mp){
            if(x.second%n!=0){
                f=1;
                break;
            }
        }

        if(f==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }


    }
    return 0;
}
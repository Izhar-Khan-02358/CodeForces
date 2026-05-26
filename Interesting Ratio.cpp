#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

int m=1e7+1;
vector<int>sv(m,1);
void sieve(){
    sv[0]=sv[1]=0;
    for(int i=2;i<m;i++){
        if(sv[i]){
            for(int j=1LL*i*i;j<m;j+=i){
                sv[j]=0;
            }
        }
    }
}

signed main(){
    sieve();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int u=0;
        for(int i=2;i<=n;i++){
            if(sv[i]){
                u+=n/i;
            }
        }

        cout<<u<<endl;
        
    }
    return 0;
}
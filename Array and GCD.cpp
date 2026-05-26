#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

int m=6*1e6+5;
vector<int>a(m,1);
vector<int>b;
void sieve(){
    for(int i=2;i<m;i++){
        if(a[i]==1){
            b.push_back(i);
            for(int j=i*i;j<m;j+=i){
                a[j]=0;
            }
        }
    }
}

vector<int>p;
void presum(){
    p.assign(b.size() + 1, 0);
    for(int i=0;i<b.size();i++){
        p[i+1]=p[i]+b[i];
    }
}

signed main(){
    sieve();
    presum();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        vector<int>ar(n);
        for(int i=0;i<n;i++){
            cin>>ar[i];
            sum+=ar[i];
        }

        sort(ar.begin(),ar.end());

        int u=0;
        for(int i=n;i>0;i--){
            if(p[i]>sum){
                sum-=ar[u];
                u++;
            }
        }

        cout<<u<<endl;
        
    }
    return 0;
}
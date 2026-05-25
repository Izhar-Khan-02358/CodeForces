#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

const int m = 1e6+1;
vector<int>v(m);

void sieve(){
    for(int i=1;i<m;i++){
        v[i]=i;
    }

    for(int i=2;i*i<=m;i++){
        if(v[i]==i){
            for(int j=i*i;j<m;j+=i){
                if(v[j]==j){
                    v[j]=i;
                }
            }
        }
    }
}

signed main(){
    sieve();
    int t;
    cin>>t;
    while(t--){
        int n,f;
        f=0;
        cin>>n;
        vector<int>ar(n);
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(i>0 && ar[i]<ar[i-1]){
                f=1;
            }
        }
        
        if(f==0){
            cout<<"Bob"<<endl;
            continue;
        }

        vector<int>bp(n);
        int a=0;
        for(int i=0;i<n;i++){
            
            int u=ar[i];

            if(u==1){
                bp[i]=1;
                continue;
            }

            int ff=v[u];
            int df=0;
            int cv=u;

            while(cv>1){
                int p=v[cv];
                df++;

                while(cv%p==0){
                    cv/=p;
                }
            }

            if(df>=2){
                a=1;
                break;
            }

            bp[i]=ff;
        }

        if(a==1){
            cout<<"Alice"<<endl;
            continue;
        }

        int bps=0;
        for(int i=1;i<n;i++){
            if(bp[i]<bp[i-1]){
                bps=1;
                break;
            }
        }

        if(bps==1){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }

    }
    return 0;
}
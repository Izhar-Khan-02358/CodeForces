#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

map<int,int>mp;
bool check(int n,int m,int md){
    int f=0;
    for(int i=60;i>=0;i--){
        f<<=1;
        if((n&1LL<<i)!=0){
            f++;
        }

        if((m&1LL<<i)!=0){
            f-=min(md,f);
        }
    }
    return (f==0);
}

void solve() {
    int n,m;cin>>n>>m;

    if(!check(n,m,1LL<<60)){
        cout<<-1 <<endl;
        return;
    }

    if(n%m==0){
        cout<<n/m<<endl;
        return;
    }

    int l=0;int r=1LL<<60;
    while(l<=r){
        int md=l+(r-l)/2;
        if(check(n,m,md)){
            r=md-1;
        }else{
            l=md+1;
        }
    }

    cout<<l<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
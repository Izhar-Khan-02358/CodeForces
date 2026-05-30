#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

void solve() {
    int n,h,k,s=0;
    cin>>n>>h>>k;
    vector<int>ar(n);
    vector<int>pm(n);
    vector<int>ps(n);
    vector<int>sm(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
        s+=ar[i];
    }

    ps[0]=ar[0];
    pm[0]=ar[0];
    for(int i=1;i<n;i++){
        ps[i]=ps[i-1]+ar[i];
        pm[i]=min(pm[i-1],ar[i]);
    }

    sm[n-1]=ar[n-1];
    for(int i=n-2;i>=0;i--){
        sm[i]=max(sm[i+1],ar[i]);
    }

    int tm=0;
    int nh=0;
    int temp =(h-1)/s; 
    nh=h-temp*s;
    tm=temp*(k+n);


    int l=1;
    int hg=n;
    int bm=n;

    while(l<=hg){
        int m=l+(hg-l)/2;

        int md=ps[m-1];

        if(m<n){
            int w=pm[m-1];
            int sd=sm[m];

            if(sd>w){
                md+=(sd-w);
            }
        }

        if(md>=nh){
            bm=m;
            hg=m-1;
        }else{
            l=m+1;
        }
    }


    cout<<tm+bm<<endl;
    
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
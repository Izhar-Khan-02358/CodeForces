#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

int q(int u,int v,int w){
    cout<<u<<" "<<v<<" "<<w<<endl;
    cout.flush();

    int ans;
    cin>>ans;
    return ans;
}

void solve() {
    int n;
    cin>>n;
    
    int ts=((n)*(n+1))/2;

    int tms=q(2,1,n);

    int k=tms-ts;

    int l=1;
    int h=n;

    while(l<h){
        int m=l+(h-l)/2;

        int ps=q(1,1,m);
        int as=q(2,1,m);

        if(as>ps){
            h=m;
        }else{
            l=m+1;
        }
    }

    int y=l+k-1;
    cout<<"! "<<l<<" "<<y<<endl;
    cout.flush();
    
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
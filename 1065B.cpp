#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=(1e5)+1;
vector<int>ar(N);
void vt(){
    ar[1]=0;
    for(int i=2;i<N;i++){
        int u=((i)*(i-1))/2;
        ar[i]=u;
    }
}

void solve() {
    int n,m;cin>>n>>m;

    int u=ar[n];
    int v=ceil(n/2);

    if(m==0){
        cout<<n<<" "<<n<<endl;
        return;
    }

    if(m>=u){
        cout<<0<<" "<<0<<endl;
        return;
    }


    int mn=0,mx=0;
    
    mn=max(0LL,n-(2*m));

    int r=lower_bound(ar.begin(),ar.end(),m)-ar.begin();

    mx=n-r;

    cout<<mn<<" "<<mx<<endl;

    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vt();
    
    solve();
    
    return 0;
}
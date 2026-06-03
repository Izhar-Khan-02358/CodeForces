#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,k,pb,ps;
    cin>>n>>k>>pb>>ps;
    vector<int>ar(n+1);
    vector<int>p(n+1);
    vector<int>b(n+1,0);
    vector<int>s(n+1,0);
    vector<int>vb;
    vector<int>vs;

    for(int i=1;i<=n;i++){
        cin>>p[i];
    }

    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }

    int i=pb;
    while(!b[i]){
        b[i]=1;
        vb.push_back(ar[i]);
        i=p[i];
    }

    int j=ps;
    while(!s[j]){
        s[j]=1;
        vs.push_back(ar[j]);
        j=p[j];
    }

    int mb=0;
    int mbs=0;
    int sb=min(k,(int)vb.size());
    for(int i=0;i<sb;i++){
        int score=mb+vb[i]*(k-i);
        mbs=max(mbs,score);
        mb+=vb[i];
    }
    
    int ms=0;
    int mss=0;
    int ss=min(k,(int)vs.size());
    for(int i=0;i<ss;i++){
        int score=ms+vs[i]*(k-i);
        mss=max(mss,score);
        ms+=vs[i];
    }

    if(mbs>mss){
        cout<<"Bodya"<<endl;
    }else if(mbs==mss){
        cout<<"Draw"<<endl;
    }else{
        cout<<"Sasha"<<endl;
    }

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
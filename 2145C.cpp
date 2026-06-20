#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    string s;cin>>s;

    vector<int>v;
    int ts=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a'){
            v.push_back(1);
            ts+=1;
        }else{
            v.push_back(-1);
            ts-=1;
        }
    }

    if(ts==0){
        cout<<0<<endl;
        return;
    }

    vector<int>p(2*n+1,-2);

    p[0+n]=-1;

    int cp=0;
    int ml=n+1;

    for(int i=0;i<n;i++){
        cp+=v[i];

        int h=cp-ts;

        if(h+n>=0 && h+n<=2*n && p[h+n]!=-2){
            ml=min(ml,i-p[h+n]);
        }

        p[cp+n]=i;
    }

    if(ml==n){
        cout<<-1<<endl;
    }else{
        cout<<ml<<endl;
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
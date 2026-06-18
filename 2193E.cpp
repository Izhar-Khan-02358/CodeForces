#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n);
    vector<int>ue;
    vector<int>d(n+1,LLONG_MAX);
    queue<int>q;
    int f=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];

        if(ar[i]==1){
            f=1;
        }

        if(ar[i]>1){
            ue.push_back(ar[i]);
        }
    }

    sort(ue.begin(),ue.end());
    ue.erase(unique(ue.begin(),ue.end()),ue.end());

    for(int x:ue){
        if(d[x]==LLONG_MAX){
            d[x]=1;
            q.push(x);
        }
    }

    while(!q.empty()){
        int u=q.front();
        q.pop();

        for(int x:ue){
            if(u*x>n) break;

            int v=u*x;

            if(d[v]==LLONG_MAX){
                d[v]=d[u]+1;
                q.push(v);
            }
        }
    }

    if(f){
        cout<<1<<" ";
    }else{
        cout<<-1<<" ";
    }

    for(int i=2;i<=n;i++){
        if(d[i]==LLONG_MAX){
            cout<<-1<<" ";
        }else{
            cout<<d[i]<<" ";
        }
    }cout<<endl;
    
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
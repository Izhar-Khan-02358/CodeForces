#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;
vector<int>vt[N];

vector<int> ka(int n){
    vector<int>id(n+1,0);
    queue<int>q;
    vector<int>ans;

    for(int i=1;i<=n;i++){
        for(int child:vt[i]){
            id[child]++;
        }
    }

    for(int i=1;i<=n;i++){
        if(id[i]==0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int cv=q.front();
        q.pop();

        ans.push_back(cv);
        for(int child:vt[cv]){
            id[child]--;

            if(id[child]==0){
                q.push(child);
            }
        }
    }

    return ans;
}

void solve() {
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        vt[i].clear();
    }
    
    for(int i=0;i<n-1;i++){
        int u,v,x,y;
        cin>>u>>v>>x>>y;
        if(x>y){
            vt[v].push_back(u);
        }else{
            vt[u].push_back(v);
        }
    }

    vector<int>a=ka(n);
    vector<int>p(n+1);

    for(int i=0;i<n;i++){
        int u=a[i];
        p[u]=i+1;
    }
    for(int i=1;i<=n;i++){
        cout<<p[i]<<" ";
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
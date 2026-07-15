#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=1e18;

void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<pair<int,int>>>ar(n+1);
    for(int i=0;i<m;i++){
        int a,b,c;cin>>a>>b>>c;
        ar[a].push_back({c,b});
        ar[b].push_back({c,a});
    }

    vector<int>dist(n+1,N);
    vector<int>p(n+1,-1);

    set<pair<int,int>>st;

    dist[1]=0;
    st.insert({0,1});

    while(!st.empty()){
        auto [d,u]=*st.begin();
        st.erase(st.begin());

        if(u==n) break;

        for(auto child:ar[u]){
            int w=child.first;
            int v=child.second;

            if(dist[u]+w<dist[v]){
                if(dist[v]!=N){
                    st.erase({dist[v],v});
                }

                dist[v]=dist[u]+w;
                p[v]=u;
                st.insert({dist[v],v});
            }
        }
    }

    if(dist[n]==N){
        cout<<-1<<endl;
    }else{
        vector<int>pt;
        for(int i=n;i!=-1;i=p[i]){
            pt.push_back(i);
        }

        reverse(pt.begin(),pt.end());

        for(int i=0;i<pt.size();i++){
            cout<<pt[i]<<" ";
        }cout<<endl;
    }
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
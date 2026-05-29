#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    map<string,int>mp;
    map<string,int>mpp;
    vector<pair<string,int>>v;
    int mx=0;
    string ans="";
    for(int i=0;i<n;i++){
        string s;
        int u;
        cin>>s>>u;
        v.push_back({s,u});
        mp[s]+=u;
    }

    for(auto x:mp){
        mx=max(mx,x.second);
    }

    for(int i=0;i<n;i++){
        mpp[v[i].first]+=v[i].second;

        if(mpp[v[i].first]>=mx && mp[v[i].first]==mx){
            cout<<v[i].first<<endl;
            return;
        }
    }
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
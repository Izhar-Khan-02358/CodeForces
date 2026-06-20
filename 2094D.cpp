#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

vector<pair<char,int>> kla(string &s){
    vector<pair<char,int>> ans;
    int n=s.length();
    for(int i=0;i<n;){
        int j=i;
        while(j<n && s[j]==s[i]){
            j++;
        }
        ans.push_back({s[i],j-i});
        i=j;
    }
    return ans;
}

void solve() {
    string a,b;
    cin>>a>>b;

    vector<pair<char,int>>p=kla(a);
    vector<pair<char,int>>q=kla(b);

    if(p.size()!=q.size()){
        cout<<"NO"<<endl;
        return;
    }

    for(int i=0;i<p.size();i++){
        if(p[i].first!=q[i].first){
            cout<<"NO"<<endl;
            return;
        }

        int u=p[i].second;
        int v=q[i].second;
        if(v<u or v>2*u){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
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
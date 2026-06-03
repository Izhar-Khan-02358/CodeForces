#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=1001;
vector<int>vt[N];

vector<int>ka(int n){
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
    
    vector<string>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ar[i][j]=='1'){
                if(i<j){
                    vt[i+1].push_back(j+1);
                }
            }

            if(ar[i][j]=='0'){
                if(i<j){
                    vt[j+1].push_back(i+1);
                }
            }

        }
    }

    vector<int>a=ka(n);
    for(auto x:a){
        cout<<x<<" ";
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
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'
#define sorta(v) sort((v).begin(), (v).end())
#define sortd(v) sort((v).rbegin(), (v).rend())

const int N=2*(1e5)+5;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n);
    vector<int>br;
    map<int,int>mp;
    map<int,int>mpp;
    int mi=0;
    int mo=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        br.push_back(ar[i]);
        mp[ar[i]]++;
        mi=max(mi,ar[i]);
    }

    sorta(br);
    br.erase(unique(br.begin(),br.end()),br.end());
    if(br[0]!=0){
        cout<<-1<<endl;
        return;
    }

    for(int i=1;i<br.size();i++){
        int d=br[i]-br[i-1];
        if(d%mp[br[i-1]]!=0){
            cout<<-1<<endl;
            return;
        }

        int k=d/mp[br[i-1]];

        if(k<=mo){
            cout<<-1<<endl;
            return;
        }
        mpp[br[i-1]]=k;
        mo=k;
    }

    for(int i=0;i<n;i++){
        if(ar[i]==mi){
            if(mo==0){
                cout<<1<<" ";
            }else{
                cout<<mo+1<<" ";
            }
        }else{
            cout<<mpp[ar[i]]<<" ";
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
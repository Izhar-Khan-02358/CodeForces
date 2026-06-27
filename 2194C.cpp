#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<string>ar(k);
    for(int i=0;i<k;i++){
        cin>>ar[i];
    }

    vector<int>m(n,0);
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            m[j]|=(1<<(ar[i][j]-'a'));
        }
    }

    vector<int>d;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            d.push_back(i);
            if(i*i!=n){
                d.push_back(n/i);
            }
        }
    }

    sort(d.begin(),d.end());

    for(int x:d){
        string s="";
        int f=0;

        for(int i=0;i<x;i++){
            int c=(1<<26)-1;

            for(int j=i;j<n;j+=x){
                c&=m[j];
            }

            if(c==0){
                f=1;
                break;
            }

            for(int p=0;p<26;p++){
                if(c&(1<<p)){
                    s+=(char)('a'+p);
                    break;
                }
            }
        }

        if(f==0){
            for(int i=0;i<n/x;i++){
                cout<<s;
            }cout<<endl;
            return;
        }
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
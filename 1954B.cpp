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
    vector<int>id;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    

    for(int i=1;i<n;){
        if(ar[i]!=ar[i-1]){
            id.push_back(i);
            if(i+1<n && ar[i-1]==ar[i+1]){
                i+=2;
            }else{
                i++;
            }
        }else{
            i++;
        }
    }

    if(id.size()<1){
        cout<<-1<<endl;
        return;
    }


    int m=LLONG_MAX;
    for(int i=1;i<id.size();i++){
        m=min(m,id[i]-id[i-1]-1);
    }

    m=min({m,id[0],((n-1)-id[id.size()-1])});

    cout<<m<<endl;
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
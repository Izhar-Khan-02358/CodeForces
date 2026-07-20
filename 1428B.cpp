#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    vector<vector<int>>ar;
    set<int>st;

    int l=0;int r=0;
    for(int i=0;i<n;i++){
        if(s[i]=='-'){
            st.insert(i);
            st.insert((i+1)%n);
        }

        if(s[i]=='<'){
            l=1;
        }

        if(s[i]=='>'){
            r=1;
        }
    }

    if(r==0 or l==0){
        cout<<n<<endl;
    }else{
        cout<<st.size()<<endl;
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
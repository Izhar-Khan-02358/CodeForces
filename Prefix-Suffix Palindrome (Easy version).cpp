#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

bool isPal(const string& s, int l, int r){
    while(l<r){
        if(s[l]!=s[r]) return false;
        l++;
        r--;
    }
    return true;
}

void solve() {
    string s;
    cin>>s;

    int n=s.length();

    int l=0;
    int r=n-1;
    while(l<r && s[l]==s[r]){
        l++;
        r--;
    }

    if(l>=r){
        cout<<s<<endl;
        return;
    }

    string m=s.substr(l,r-l+1);
    int ml=m.length();

    int pl=0;
    for(int i=ml;i>=1;i--){
        if(isPal(m,0,i-1)){
            pl=i;
            break;
        }
    }

    string lp=m.substr(0,pl);

    int sl=0;
    for(int i=ml;i>=1;i--){
        if(isPal(m,ml-i,ml-1)){
            sl=i;
            break;
        }
    }

    string ls=m.substr(ml-sl);

    string pf=s.substr(0,l);
    string sf=s.substr(r+1);

    if(lp.length()>ls.length()){
        cout<<pf<<lp<<sf<<endl;
    }else{
        cout<<pf<<ls<<sf<<endl;
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
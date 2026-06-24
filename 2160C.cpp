#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

bool kla(string &s){
    int l=0;
    int h=s.length()-1;

    while(l<h){
        if(s[l]!=s[h]){
            return false;
        }
        l++;
        h--;
    }

    return true;
}

void solve() {
    int n;
    cin>>n;

    if(n==0){
        cout<<"YES"<<endl;
        return;
    }
    
    string s="";

    while(n>0){
        int u=(n&1);
        if(u){
            s+='1';
        }else{
            s+='0';
        }
        n>>=1;
    }

    reverse(s.begin(),s.end());

    string p="";
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='0'){
            p+='0';
        }else{
            break;
        }
    }

    s=p+s;

    int l=s.length();

    if(l%2){
        if(s[l/2]=='1'){
            cout<<"NO"<<endl;
            return;
        }

        if(kla(s)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        if(kla(s)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
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
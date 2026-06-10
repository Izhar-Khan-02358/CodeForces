#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;

    int c=0;
    int uc=0;
    int co=0,uco=0;
    for(int i=0;i<n;i++){
        if(a[i]==b[i]){
            uc++;
            if(a[i]=='1'){
                uco++;
            }
        }else{
            c++;
            if(a[i]=='1'){
                co++;
            }
        }
    }

    int r=LLONG_MAX;;

    if(c%2==0 && co==c/2){
        r=min(c,r);
    }

    if(uc%2 && (uco==(uc/2+1))){
        r=min(uc,r);
    }

    if(r==LLONG_MAX){
        r=-1;
    }

    cout<<r<<endl;
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
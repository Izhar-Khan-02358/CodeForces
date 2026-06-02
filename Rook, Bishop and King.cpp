#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int r=0,bp=0,k=0;

    if(a==c or b==d){
        r=1;
    }else{
        r=2;
    }

    if((a+b)%2!=(c+d)%2){
        bp=0;
    }else{
        if(a+b==c+d or a-b==c-d){
            bp=1;
        }else{
            bp=2;
        }
    }

    k=max(abs(a-c),abs(b-d));

    cout<<r<<" "<<bp<<" "<<k<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
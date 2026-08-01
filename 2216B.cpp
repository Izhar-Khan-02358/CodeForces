#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'
#define sorta(v) sort((v).begin(), (v).end())
#define sortd(v) sort((v).rbegin(), (v).rend())

const int N=2*(1e5)+5;

void solve() {
    int a,b,c;
    cin>>a>>c>>b;

    int u=0;
    int p=min(a,b);
    u+=(p*4);
    a-=p;
    b-=p;

    if(a>0){
        if(a%2==0){
            if(c>=(a/2)){
                u+=((a/2)*7);
                c-=(a/2);
                a=0;
            }else{
                u+=(c*7);
                a-=(2*c);
                c=0;
            }
        }else{
            if(c>=(a/2)){
                u+=((a/2)*7);
                c-=(a/2);
                
                if(c>0){
                    u+=5;
                    c-=1;
                }else{
                    u+=3;
                }
                a=0;
            }else{
                u+=(c*7);
                a-=(2*c);
                c=0;
            }
        }
    }
    
    if(a>0){
       u+=(2*a)+1;
       a=0;
    }

    int f=b+c;
    u+=(f*3);

    cout<<u<<endl;
    
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
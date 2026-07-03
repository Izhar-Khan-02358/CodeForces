#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    ld a,b,c;
    cin>>a>>b>>c;

    if(a==0 && b==0 && c==0){
        cout<<-1<<endl;
        return;
    }

    if(a==0 && b==0 && c!=0){
        cout<<0<<endl;
        return;
    }

    if(a==0 && b!=0){
        cout<<1<<endl;
        cout<<fixed<<setprecision(6)<<-(c/b)<<endl;
        return;
    }

    ld d=(b*b)-(4*a*c);

    if(d<0){
        cout<<0<<endl;
        return;
    }

    if(d==0){
        cout<<1<<endl;
        cout<<fixed<<setprecision(6)<<-b/(2*a)<<endl;
        return;
    }

    ld r1=(-b+sqrt(d))/(2*a);
    ld r2=(-b-sqrt(d))/(2*a);

    if(r1>r2) swap(r1,r2);

    cout<<2<<endl;
    cout<<fixed<<setprecision(6)<<r1<<endl;
    cout<<fixed<<setprecision(6)<<r2<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
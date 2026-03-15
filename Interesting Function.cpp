#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

int digit(int x){
    int u=0;
    while(x>0){
        u+=x;
        x/=10;
    }

    return u;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;

        int fl=digit(l);
        int fr=digit(r);

        cout<<fr-fl<<endl;
        
    }
    return 0;
}
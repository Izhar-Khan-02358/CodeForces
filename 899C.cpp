#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;

    if(n==2){
        cout<<1<<endl;
        cout<<1<<" "<<1<<endl;
        return;
    }
    
    if(n%2){
        if(n%4==1){
            cout<<1<<endl;
            cout<<n/2+1<<" ";
            cout<<1<<" ";
            for(int i=0;i<n/2;i+=2){
                cout<<i+2<<" "<<n-i<<" ";
            }
        }else{
            cout<<0<<endl;
            cout<<n/2<<" ";
            for(int i=3;i<=n;i+=4){
                if(i+1<=n) cout<<i<<" "<<i+1<<" ";
                else cout<<i<<" ";
            }
        }
        cout<<endl;
    }else{
        if(n%4==0){
            cout<<0<<endl;
            cout<<n/2<<" ";
            for(int i=0;i<n/2;i+=2){
                cout<<i+1<<" "<<n-i<<" ";
            }
        } else {
            cout<<1<<endl;
            cout<<n/2<<" ";
            cout<<1<<" ";
            for(int i=4;i<=n;i+=4){
                cout<<i<<" "<<i+1<<" ";
            }
        }
        cout<<endl;
    }

    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
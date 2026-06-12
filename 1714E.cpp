#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    int u=0;
    for (int i=0;i<n;i++){
        cin>>a[i];
        
        if(a[i]%10==5){
            a[i]+=5; 
        }
        
        if(a[i]%10==0){
            u=1;
        }
    }

    if(u){
        for(int i=1;i<n;i++){
            if(a[i]!=a[0]){
                cout<<"No"<<endl;
                return;
            }
        }
        cout<<"Yes"<<endl;
    }else{
        for(int i=0;i<n;i++){
            while(a[i]%10!=2){
                a[i]+=a[i]%10;
            }
        }

        for(int i=1;i<n;i++){
            if(a[i]%20!=a[0]%20){
                cout<<"No"<<endl;
                return;
            }
        }
        cout<<"Yes"<<endl;
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
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

bool kla(vector<int>&a,vector<int>&b){
    int u=0;
    for(int i=0;i<5;i++){
        if(a[i]<b[i]){
            u++;
        }
    }

    if(u>=3){
        return true;
    }else{
        return false;
    }
}

void solve() {
    int n;
    cin>>n;
    vector<vector<int>>ar(n,vector<int>(5));
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cin>>ar[i][j];
        }
    }

    int c=0;
    for(int i=1;i<n;i++){
        if(kla(ar[i],ar[c])){
            c=i;
        }
    }

    int f=0;
    for(int i=0;i<n;i++){
        if(i==c) continue;

        if(!kla(ar[c],ar[i])){
            f=1;
            break;
        }
    }

    if(f==0){
        cout<<c+1<<endl;
    }else{
        cout<<-1<<endl;
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
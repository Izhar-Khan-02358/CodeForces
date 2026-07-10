#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    int a=0,b=0;
    for(int i=0;i<n;i++){
        if(ar[i]==25){
            a++;
        }else if(ar[i]==50){
            if(a==0){
                cout<<"NO"<<endl;
                return;
            }
            a--;
            b++;
        }else{
            if((b>0 && a>0)){
                b--;
                a--;
            }else if(a>2){
                a-=3;
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    cout<<"YES"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
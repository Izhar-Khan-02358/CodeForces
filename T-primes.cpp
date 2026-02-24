#include<bits/stdc++.h>
using namespace std;
#define int long long

int m=1e6+1;
vector<bool>v(m+1,true);
void prime(){
    v[0]=false;
    v[1]=false;

    for(int i=2;i*i<=m;i++){
        if(v[i]){
            for(int j=i*i;j<=m;j+=i){
                v[j]=false;
            }
        }
    }
}

signed main(){
    prime();
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    for(auto x:ar){
        int h=sqrtl(x);
        if(h*h==x && h<=m && v[h]==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
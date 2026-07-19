#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    int a,b,c;
    cin>>a>>b>>c;

    vector<int>v(4);

    int m=max({a,b,c});
    int s=a+b+c-m;

    if((s+m)%2!=0){
        cout<<"Impossible"<<endl;
        return;
    }
   
    if(s<m){
        cout<<"Impossible"<<endl;
        return;
    }

    
    int id=-1;
    if(a==m){
        id=1;
    }else if(b==m){
        id=2;
    }else{
        id=3;
    }

    int y=(s-m)/2;
    if(id==1){
        v[2]=y;
        v[1]=b-y;
        v[3]=c-y;
    }else if(id==2){
        v[3]=y;
        v[1]=a-y;
        v[2]=c-y;
    }else{
        v[1]=y;
        v[3]=a-y;
        v[2]=b-y;
    }
    
    for(int i=1;i<=3;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
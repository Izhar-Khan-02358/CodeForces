#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    cin>>n;
    vector<int>c;
    for(int i=1;i<=n-1;i++){
        if(__gcd(i,n)==1){
            c.push_back(i);
        }
    }

    int p=1;
    for(auto x:c){
        p=(p*x)%n;
    }
    vector<int>a;
    if(p==1){
        a=c;
    }else{
        c.pop_back();
        a=c;
    }

    cout<<a.size()<<endl;
    for(int x:a){
        cout<<x<<" ";
    }cout<<endl;

    return 0;
}
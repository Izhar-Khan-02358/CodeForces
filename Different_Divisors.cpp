#include<bits/stdc++.h>
using namespace std;
#define int long long


bool prime(int n){
    if(n<=1)return false;
    if(n<=3)return true;
    if(n%2==0)return false;

    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0)return false;
    }
    return true;
}

signed main(){
    int t;
    cin>>t;
    vector<int>ar;
    int u=0;
    int v=0;
    for(int i=2;i<=100000;i++){
        if(prime(i)){
            ar.push_back(i);
        }
    }   
    while(t--){
        int d;
        cin>>d;
        for(int i=0;i<ar.size();i++){
            if(ar[i]>=(d+1)){
                u=ar[i];
                break;
            }
        }

        for(int i=0;i<ar.size();i++){
            if(ar[i]>=(d+u)){
                v=ar[i];
                break;
            }
        }

        cout<<min(u*u*u,u*v)<<endl;
    }
    return 0;
}
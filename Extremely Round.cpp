#include<bits/stdc++.h>
using namespace std;
#define int long long

int er(int x){
    int zc=0;
    int dc=0;
    while(x>0){
        if(x%10==0){
            zc++;
        }
        dc++;
        x/=10;
    }

    if(zc==(dc-1)){
        return 1;
    }else{
        return 0;
    }
}

signed main(){
    int t;
    cin>>t;
    
    vector<int>v;

    for(int i=0;i<=999999;i++){
        if(er(i)==1){
            v.push_back(i);
        }
    }

    while(t--){
        int n;
        cin>>n;
        int a=0;

        for(int i=0;i<v.size();i++){
            if(v[i]<=n){
                a++;
            }else{
                break;
            }
        }

        cout<<a<<endl;
    }
    return 0;
}
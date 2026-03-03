#include<bits/stdc++.h>
using namespace std;
#define int long long

int sum(int n){
    int x=(n*(n+1))/2;
    return x;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int k,x;
        cin>>k>>x;

        int l=1;
        int h=2*k-1;
        int u=2*k-1;
        while(l<=h){
            int c;
            int m=(l+h)/2;

            if(m>=k){
                c=sum(k)+sum(k-1)-sum(2*k-1-m);
            }else{
                c=sum(m);
            }

            if(c>=x){
                u=m;
                h=m-1;
            }else{
                l=m+1;
            }
        }

        cout<<u<<endl;
        
    }
    return 0;
}
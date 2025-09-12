#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n,k,x;
        cin>>n>>k>>x;
        long long totalsum=(n*(n+1))/2;
        long long u=n-k;
        long long min=((k)*(k+1))/2;
        long long sum=((u)*(u+1))/2;
        long long max=totalsum-sum;
        
        if(x>=min && x<=max){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}
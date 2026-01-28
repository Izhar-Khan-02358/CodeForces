#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int>ar(n);
        int k=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            k+=ar[i];
        }

        if(k<s){
            cout<<-1<<endl;
            continue;
        }else if(k==s){
            cout<<0<<endl;
            continue;
        }

        int a=0;
        int i=0;
        int j=0;
        int u=0;
        while(i<n && j<n){
            u+=ar[j];
            j++;
            while(u>s){
                u-=ar[i];
                i++;
            }

            a=max(a,j-i);
        }

        cout<<n-a<<endl;
    }   
    return 0;
}
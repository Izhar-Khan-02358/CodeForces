#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ar(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            mp[ar[i]]=i;
        }

        int p=0;
        int q=0;
        int m=n;
        int i=0;
        while(m>0){
            if(ar[i]==m){
                m--;
                i++;
            }else{
                p=i;
                q=m;
                break;
            }
        }

        int y=mp[q];

        reverse(ar.begin()+p,ar.begin()+y+1);

        for(auto x:ar){
            cout<<x<<" ";
        }cout<<endl;
        
    }
    return 0;
}
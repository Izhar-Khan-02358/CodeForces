#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

int c(string s){
    int u=0;
    for(char x:s){
       int i=(int)(x-'a');
       u=u^(1<<i); 
    }

    return u;
}

signed main(){
    int n;cin>>n;
    vector<string>s(n);
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>s[i];
        v.push_back(c(s[i]));
    }

    unordered_map<int,int>mp;

    int ans=0;

    for(int i=0;i<n;i++){
        int m=v[i];
        ans+=mp[m];
        for(int b=0;b<26;b++){
            ans+=mp[m^(1<<b)];
        }

        mp[m]++;
    }

    cout<<ans<<endl;

    return 0;
}
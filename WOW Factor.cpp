#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

signed main(){
    string s;
    cin>>s;
    int n=s.length();

    map<int,int>mp;
    vector<int>z;
    int cw=0;
    int tw=0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='v' && s[i+1]=='v'){
            cw++;
            tw++;
        }

        if(s[i]=='o'){
            mp[i]=cw;
            z.push_back(i);
        }
    }

    int ans=0;
    for(auto x:z){
        ans+=((mp[x])*(tw-mp[x]));
    }

    cout<<ans<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        set<char>s1;
        set<char>s2;

        map<int,int>m1;
        map<int,int>m2;


        for(int i=0;i<n;i++){
            s1.insert(s[i]);
            m1[i]=s1.size();
        }

        for(int i=n-1;i>=0;i--){
            s2.insert(s[i]);
            m2[i]=s2.size();
        }

        int ans=0;
        for(int i=0;i<n-1;i++){
            int u=m1[i]+m2[i+1];
            ans=max(ans,u);
        }

        cout<<ans<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>f;
        vector<int>s;

        while(n--){
            int m;
            cin>>m;
            vector<int>a(m);
            for(int i=0;i<m;i++){
                cin>>a[i];
            }

            sort(a.begin(),a.end());
            f.push_back(a[0]);
            s.push_back(a[1]);
        }

        sort(f.begin(),f.end());
        sort(s.begin(),s.end());

        s[0]=f[0];

        int ans=0;
        for(auto x:s){
            ans+=x;
        }

        cout<<ans<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
int m=998244353;

int fact(int x){
    int r=1;
    for(int i=2;i<=x;i++){
        r=(r*i)%m;
    }

    return r;
}


signed main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();

        int g=1;
        int h=0;
        int u=1;
        vector<int>ar;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                u++;
            }else if(s[i]!=s[i-1] && u>1){
                ar.push_back(u);
                h+=u;
                g=(g*u)%m;
                u=1;
            }
        }

        if(u>1){
            ar.push_back(u);
            h+=u;
            g=(g*u)%m;
        }

        int l=ar.size();
        if(l==0){
            cout<<0<<" "<<1<<endl;
            continue;
        }


        int ans=h-l;
        int f=fact(ans);

        cout<<ans<<" "<<(f*g)%m<<endl;
        
    }
    return 0;
}
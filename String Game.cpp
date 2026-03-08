#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

bool check(string s,string p,vector<int>ar,int n,int m){
    vector<bool>br(n,false);
    for(int i=0;i<m;i++){
        br[ar[i]-1]=true;
    }

    int f=0;
    for(int i=0;i<n;i++){
        if(br[i]){
            continue;
        }else{
            if(s[i]==p[f]){
                f++;
            }
        }

        if(f==p.size()){
            return true;
        }
    }

    return false;
}

signed main(){
    string s;
    string p;
    cin>>s;
    cin>>p;
    int n=s.size();
    int g=p.size();

    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    int l=0;
    int h=n;
    int ans=0;
    while(l<=h){
        int m=l+((h-l)/2);
        if(check(s,p,ar,n,m)){
            l=m+1;
            ans=m;
        }else{
            h=m-1;
        }
    }

    cout<<ans<<endl;

    return 0;
}
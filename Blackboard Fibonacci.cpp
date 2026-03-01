#include<bits/stdc++.h>
using namespace std;
#define int long long

bool ea(int a,int b,int n){
    while(a && b){
        if(a>=b){
            int q=a/b;
            n-=q;
            a%=b;
        }else{
            int q=b/a;
            if(q>1 && b%a==0){
                q--;
            }
            n-=q;
            b-=a*q;
        }
    }

    return min(a,b)==0 && max(a,b)==1 && n==0;
}

string ans(int a,int b){
    if(a==0 && b==1){
        return "";
    }
    if(a>=b){
        return ans(a-b,b)+"T";
    }
    return ans(a,b-a)+"B";
}

int mis(string s){
    int m=0;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            m++;
        }
    }
    return m;
}

signed main(){
    int n,r;
    cin>>n>>r;
    pair<int,string>res={n+1,""};

    for(int x=1;x<=r;x++){
        if(ea(x,r,n)){
            string seq=ans(x,r);
            int u=mis(seq);
            if(u<res.first){
                res={u,seq};
            }
        }

        if(ea(r,x,n)){
            string seq=ans(r,x);
            int u=mis(seq);
            if(u<res.first){
                res={u,seq};
            }
        }
    }

    if(res.first>n){
        cout<<"IMPOSSIBLE"<<endl;
    }else{
        cout<<res.first<<endl;
        cout<<res.second<<endl;
    }
    return 0;
}
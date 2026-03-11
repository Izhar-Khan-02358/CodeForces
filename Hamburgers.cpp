#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

bool check(int b,int s,int c,int nb,int ns,int nc,int pb,int pc,int ps,int m,int r){
    int nns=max(m*s-ns,0LL);
    int nnc=max(m*c-nc,0LL);
    int nnb=max(m*b-nb,0LL);

    int rb=nnb*pb;
    int rs=nns*ps;
    int rc=nnc*pc;

    int tr=rb+rc+rs;

    return tr<=r;
}

signed main(){
    string u;
    cin>>u;
    int nb,ns,nc;
    cin>>nb>>ns>>nc;
    int pb,ps,pc;
    cin>>pb>>ps>>pc;
    int r;
    cin>>r;
    int b=0,s=0,c=0;
    int n=u.size();
    for(int i=0;i<n;i++){
        if(u[i]=='B'){
            b++;
        }else if(u[i]=='S'){
            s++;
        }else{
            c++;
        }
    }

    int h=1e13;
    int l=0LL;
    int ans=0LL;
    while(l<=h){
        int m=l+((h-l)/2);
        if(check(b,s,c,nb,ns,nc,pb,pc,ps,m,r)){
            ans=m;
            l=m+1;
        }else{
            h=m-1;
        }
    }

    cout<<ans<<endl;
    return 0;
}
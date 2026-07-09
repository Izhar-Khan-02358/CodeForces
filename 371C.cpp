#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;
int nb,ns,nc;
int pb,ps,pc;
int r;
int b,s,c;

bool kla(int m){
    int p=m*b;
    int q=m*s;
    int w=m*c;

    int rm=0;
    if((nb-p)<0){
        int h=p-nb;
        rm+=(h*pb);
    }

    if((ns-q)<0){
        int h=q-ns;
        rm+=(h*ps);
    }

    if((nc-w)<0){
        int h=w-nc;
        rm+=(h*pc);
    }

    if(r>=rm){
        return true;
    }else{
        return false;
    }
}

void solve() {
    string st;cin>>st;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;

    for(char x:st){
        if(x=='B'){
            b++;
        }
        if(x=='S'){
            s++;
        }
        if(x=='C'){
            c++;
        }
    }

    int ob=(b*pb)+(s*ps)+(c*pc);

    int u=0;
    int l=0;
    int h=1e15;

    while(l<=h){
        int m=l+(h-l)/2;

        if(kla(m)){
            l=m+1;
            u=m;
        }else{
            h=m-1;
        }
    }
    
    cout<<u<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
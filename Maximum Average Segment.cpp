#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

bool check(ld x,int& L,int& R,int n,vector<ld>&ar,int d){
    vector<ld>p(n+1,0);
    vector<ld>mn(n+1,0);
    for(int i=0;i<n;i++){
        p[i+1]=p[i]+(ar[i]-x);
        mn[i+1]=min(mn[i],p[i+1]);
    }

    for(int r=d;r<=n;r++){
        if(p[r]-mn[r-d]>=0){
            for(int i=0;i<=r-d;i++){
                if(p[r]-p[i]>=0){
                    L=i+1;
                    R=r;
                    return true;
                }
            }
        }
    }

    return false;
}

signed main(){
    int n,d;
    cin>>n>>d;
    vector<ld>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    ld l=0;
    ld h=100;
    ld ans=0;
    int rl=1;
    int rr=d;
    while(h-l>=1e-6){
        ld m=l+((h-l)/2);
        int L=-1;
        int R=-1;
        if(check(m,L,R,n,ar,d)){
            l=m;
            rl=L;
            rr=R;
            ans=m;
        }else{
            h=m;
        }
    }

    cout<<rl<<" "<<rr<<endl;
    
    return 0;
}
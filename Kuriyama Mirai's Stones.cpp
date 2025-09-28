#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    cin>>n;
    int ar[n];
    int br[n];
    vector<int>pre(n);
    vector<int>sre(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
        br[i]=ar[i];
        pre[0]=ar[0];
        if(i)pre[i]=pre[i-1]+ar[i];
    }

    sort(br,br+n);
    sre[0]=br[0];
    for(int i=1;i<n;i++){
        sre[i]=sre[i-1]+br[i];
    }
    sre.insert(sre.begin(),0);
    pre.insert(pre.begin(),0);
    int m;
    cin>>m;
    for(int j=0;j<m;j++){
        int type=0;
        cin>>type;
        int l,r;
        cin>>l>>r;
        if(type==1)cout<<pre[r]-pre[l-1];
        else cout<<sre[r]-sre[l-1];
        cout<<endl;
    }
    return 0;
}
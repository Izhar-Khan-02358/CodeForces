#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ar(n);
        vector<int>es(n),os(n);
        map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        int u=0;
        os[0]=ar[0];
        m[os[0]-es[0]]++;
        for(int i=1;i<n;i++){
            os[i]+=os[i-1];
            es[i]+=es[i-1];

            if(i%2==0){
                os[i]+=ar[i];
            }else{
                es[i]+=ar[i];
            }

            m[os[i]-es[i]]++;

            if(m[os[i]-es[i]]==2 or os[i]-es[i]==0){
                u=1;
                break;
            }
        }

        if(u==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
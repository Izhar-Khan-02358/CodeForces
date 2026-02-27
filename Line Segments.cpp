#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c,d;
        cin>>n;
        cin>>a>>b>>c>>d;
        vector<double>ar(n+1,0);
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        double e=sqrt((a-c)*(a-c)+(b-d)*(b-d));
        ar[n]=e;

        sort(ar.begin(),ar.end());
        double m=ar[n];
        for(int i=0;i<n;i++){
            m-=ar[i];
        }


        if(m<=0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }

    }
    return 0;
}
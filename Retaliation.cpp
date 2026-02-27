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
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        int y=(2*ar[0]-ar[1])/(n+1);
        int x=ar[1]-ar[0]+y;

        if(y<0 or x<0){
            cout<<"NO"<<endl;
            continue;
        }

        for(int i=0;i<n;i++){
            ar[i]-=x*(i+1);
            ar[i]-=y*(n-i);
        }

        int h=0;
        for(int i=0;i<n;i++){
            if(ar[i]!=0){
                h=1;
                break;
            }
        }

        if(h==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }

    }
    return 0;
}
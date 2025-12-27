#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int b=0;
        vector<int>ar;
        for(int i=0;i<n;i++){
            int x=0;
            cin>>x;
            ar.push_back(x);
        }

        for(int i=1;i<n;i++){
            b+=ar[i];
        }

        int c=-b;
        int d=0;
        for(int i=1;i<n;i++){
            b-=ar[i];
            int e=ar[0]+d-b;

            if(e>c){
                c=e;
            }

            d+=abs(ar[i]);
        }
        cout<<c<<endl;
    }
    return 0;
}
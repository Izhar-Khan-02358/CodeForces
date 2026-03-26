#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        vector<int>ar(n);
        vector<int>br;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        br.push_back(ar[0]);

        for(int i=1;i<n-1;i++){
            if((ar[i]-ar[i-1])*(ar[i+1]-ar[i])<0){
                br.push_back(ar[i]);
            }
        }

        br.push_back(ar[n-1]);
        cout<<br.size()<<endl;
        for(auto x:br){
            cout<<x<<" ";
        }cout<<endl;
        
    }
    return 0;
}
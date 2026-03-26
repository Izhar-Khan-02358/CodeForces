#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>ar;
        
        int u=0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                ar.push_back(i);
                n/=i;
                u++;
            }

            if(ar.size()==2){
                break;
            }
        }

        if(ar.size()<2 or n==ar[0] or n==ar[1] or n==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            cout<<ar[0]<<" "<<ar[1]<<" "<<n<<endl;;
        }

    }
    return 0;
}
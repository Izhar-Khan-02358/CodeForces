#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double

signed main(){
    int n;
    cin>>n;
    vector<int>ar(n);
    vector<int>p(n);
    int f=0;
    int s=0;
    int c=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]==0){
            f++;
        }
    }

    if(f==n){
        cout<<"NO"<<endl;
    }else{
        p[0]=ar[0];
        for(int i=1;i<n;i++){
            p[i]=p[i-1]+ar[i];
        }

        if(p[n-1]!=0){
            cout<<"YES"<<endl;
            cout<<1<<endl;
            cout<<1<<" "<<n<<endl;
        }else{
            cout<<"YES"<<endl;
            cout<<2<<endl;
            for(int i=0;i<n;i++){
                if(p[i]!=0){
                    s=i;
                    break;
                }
            }
            cout<<1<<" "<<s+1<<endl;
            cout<<s+2<<" "<<n<<endl;
        }
        
    }
    return 0;
}
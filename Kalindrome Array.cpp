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

        if(n<3){
            cout<<"YES"<<endl;
            continue;
        }

        for(int i=0;i<ar.size();i++){
            if(ar[i]!=ar[ar.size()-1-i]){
                vector<int>a=ar,b=ar;

                a.erase(remove(a.begin(),a.end(),ar[i]),a.end());
                b.erase(remove(b.begin(),b.end(),ar[ar.size()-1-i]),b.end());
                int u=0,v=0;
                
                for(int l=0,r=a.size()-1;l<r;l++,r--){
                    if(a[l]!=a[r]){
                        u=1;
                        break;
                    }
                }

                for(int l=0,r=b.size()-1;l<r;l++,r--){
                    if(b[l]!=b[r]){
                        v=1;
                        break;
                    }
                }

                if(u==0 or v==0){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
                goto next_case;
            }
        }

        cout<<"YES"<<endl;

        next_case:;
    }
    return 0;
}
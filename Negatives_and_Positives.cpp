#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        vector<int>br;
        int ps=0;
        int ns=LLONG_MIN;
        int ni=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            br.push_back(abs(ar[i]));
            if(ar[i]>=0){
                ps+=ar[i];
            }else{
                ps+=abs(ar[i]);
                ni++;
            }
        }
        sort(br.begin(),br.end());

        int p[n];
        p[0]=br[0];
        for(int i=1;i<n;i++){
            p[i]=br[i]+p[i-1];
        }
        

        for(int i=0;i<n;i++){
            if(ar[i]==0){
                if(i==0 && ar[i+1]<0){
                    ni--;
                }else if(i==n-1 && ar[i-1]<0){
                    ni--;
                }else if(ar[i+1]<0 && ar[i-1<0]){
                    ni-=2;
                }else if(ar[i+1]<0 && ar[i-1>0]){
                    ni--;
                }else if(ar[i+1]>0 && ar[i-1<0]){
                    ni--;
                }
            }
        }

        if(ni%2==0){
            cout<<ps<<endl;
        }else{
            cout<<ps-(2*(p[0]))<<endl;
        }
    }
    return 0;
}
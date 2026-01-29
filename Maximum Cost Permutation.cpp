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
        vector<int>br;
        map<int,int>m;
        map<int,int>h;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            m[ar[i]]++;
            h[ar[i]]=i;
        }
        int p=0;
        if(m[0]==1){
            for(int i=0;i<n;i++){
                if(m[i+1]==0){
                    if(h[0]==i){
                        ar[i]=i+1;
                    }
                }
            }
        }



        for(int i=0;i<n;i++){
            if(ar[i]==0 or ar[i]!=i+1){
                br.push_back(i);
            }
        }
        
        int s=br.size();
        if(s==0){
            cout<<0<<endl;
            continue;
        }
        int q=br[s-1]-br[0]+1;

        cout<<q<<endl;
    }
    return 0;
}
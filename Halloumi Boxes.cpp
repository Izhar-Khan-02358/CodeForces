#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        int ar[n];
        int br[n];
        int ans=0;
        for(int j=0;j<n;j++){
            cin>>ar[j];
            br[j]=ar[j];
        }
        sort(br,br+n);
        int g=0;
        for(int v=0;v<n;v++){
            if(ar[v]!=br[v] and k<2){
                cout<<"NO"<<endl;
                g=1;
                break;
            }
        }
        if(g==0){cout<<"YES";}
        cout<<endl;
        
    }
    return 0;
}
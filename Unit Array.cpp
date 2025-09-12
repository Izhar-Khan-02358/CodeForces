#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int a[n];
        int p=0;
        int q=0;
        int ans=0;
        for(int j=0;j<n;j++){
            cin>>a[j];
 
            if(a[j]<0){
                q++;
            }else{
                p++;
            }
        }
        while(q>p or q%2!=0){
            p++;
            q--;
            ans++;
        }
        cout<<ans<<endl;
    }
}
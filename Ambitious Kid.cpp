#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    int br[n];
    int e=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
 
        br[i]=abs(ar[i]-0);
    }
    sort(br,br+n);
    cout<<br[0]<<endl;
 
}
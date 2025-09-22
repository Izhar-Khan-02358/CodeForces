#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long u=0;
        long long ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        for(int j=n-1;j>0;j--){
            while(ar[j] <= ar[j-1] && ar[j-1] > 0){
                ar[j-1] /= 2;
                u++;
            }

            if(ar[j] <= ar[j-1] && ar[j-1] == 0){
                u = -1;
                break;
            }
        }
        cout<<u<<endl;
    }
    return 0;
}
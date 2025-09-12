#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k,x;
        cin>>n>>k>>x;
        if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int j=0;j<n;j++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else{
            if(k==1){
                cout<<"NO"<<endl;
                continue;
            }
            
            if(k==2){
                if(n%2==0){
                    cout<<"YES"<<endl;
                    cout<<n/2<<endl;
                    for(int i=0;i<n/2;i++){
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }
                if(n%2!=0){
                    cout<<"NO"<<endl;
                }
            }
            if(k>=3){
                if(n%2==0){
                    cout<<"YES"<<endl;
                    cout<<n/2<<endl;
                    for(int i=0;i<n/2;i++){
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }
                if(n%2!=0){
                    cout<<"YES"<<endl;
                    cout<<((n-3)/2)+1<<endl;
                    cout<<3<<" ";
                    for(int i=0;i<(n-3)/2;i++){
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }
            }
        }
    }
    return 0;
}
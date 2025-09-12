#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        long long b[n];
        vector<long long>a;
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
        a.push_back(b[0]);
        for(int k=1;k<n;k++){
            if(b[k]>=b[k-1]){
                a.push_back(b[k]);
            }else{
                a.push_back(b[k]);
                a.push_back(b[k]);
            }
        }
        cout<<a.size()<<endl;
        for(auto x:a){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}

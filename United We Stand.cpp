#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b,c;
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        sort(a.begin(),a.end());
        
        for(int e=0;e<n;e++){
            if(a[e]==a[0]){
                b.push_back(a[e]);
            }
            if(a[e]!=a[0]){
                c.push_back(a[e]);
            }
        }
        if(c.size()==0){
            cout<<-1<<endl;
        }else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int u=0;u<b.size();u++){
                cout<<b[u]<<" ";
            }cout<<endl;
        
            for(int r=0;r<c.size();r++){
                cout<<c[r]<<" ";
            }cout<<endl;}
    }
    return 0;
}
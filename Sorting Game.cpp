#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>v;

        int a=0;
        int z=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]>s[i+1]){
                a=1;
            }
            if(s[i]=='0'){
                z++;
            }
        }

        if(s[n-1]=='0'){
            z++;
        }

        if(a==0){
            cout<<"Bob"<<endl;
        }else{
            cout<<"Alice"<<endl;
            for(int i=0;i<z;i++){
                if(s[i]=='1'){
                    v.push_back(i+1);
                }
            }
            for(int i=z;i<n;i++){
                if(s[i]=='0'){
                    v.push_back(i+1);
                }
            }
            cout<<v.size()<<endl;
            for(auto x:v){
                cout<<x<<" ";
            }cout<<endl;
        }
    }
        
    return 0;
}
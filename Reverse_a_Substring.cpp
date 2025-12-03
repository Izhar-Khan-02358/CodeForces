#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string a=s;
        sort(a.begin(),a.end());
        int f=0;
        int l=0;
        char c;
        if(a==s){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                if(s[i]!=a[i]){
                    f=i;
                    c=a[i];
                    break;
                }
            }
            for(int i=f;i<n;i++){
                if(s[i]==c){
                    l=i;
                    break;
                }
            }

            cout<<f+1<<" "<<l+1<<endl;
        }
    return 0;
}
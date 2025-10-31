#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        string s=to_string(x);
        string e=s;

        for(int i=0;i<k-1;i++){
            s+=e;
        }
        if(s.size()>18){
            cout<<"NO"<<endl; 
            continue;
        }


        int u=stoll(s);
        string a="YES";
        if(u==1){
            a="NO";
            cout<<a<<endl;
            continue;
        }
        if(u<=3 && u>1){
            a="YES";
            cout<<a<<endl;
            continue;
        }

        if(u%2==0 or u%3==0){
            a="NO";
            cout<<a<<endl;
            continue;
        }
        int p=0;
        for(int i=5;i*i<=u;i+=6){
            if(u%i==0 or u%(i+2)==0){
                p=1;
                break;
            }
        }   

        if(p==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

        
    }
    return 0;
}
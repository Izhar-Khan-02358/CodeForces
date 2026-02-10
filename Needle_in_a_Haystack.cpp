#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a;
        cin>>b;
        int h=0;
        map<char,int>am;
        map<char,int>bm;
        for(int i=0;i<a.length();i++){
            am[a[i]]++;
        }
        for(int i=0;i<b.length();i++){
            bm[b[i]]++;
        }

        for(int i='a';i<='z';i++){
            if(bm[i]<am[i]){
                h=1;
                break;
            }else{
                bm[i]-=am[i];
            }
        }

        if(h==1){
            cout<<"Impossible"<<endl;
            continue;
        }

        string c="";
        for(int i='a';i<='z';i++){
            while(bm[i]--){
                c+=i;
            }
        }

<<<<<<< HEAD
=======
        // cout<<'*'<<c<<'*'<<endl;

>>>>>>> a3ca6b069e34476aae5903271bff19032c4c37ff
        string d="";

        int i=0;
        int j=0;
        while(d.length()<b.length()){
            if(j==a.length()){
                d+=c[i++];
            }else if(i==c.length()){
                d+=a[j++];
            }else if(c[i]<a[j]){
                d+=c[i++];
            }else{
                d+=a[j++];
            }
<<<<<<< HEAD
        }

        cout<<d<<endl;
=======

            // cout<<d<<" "<<i<<" "<<j<<endl;
        }

        cout<<d<<endl;
        // cout<<a.length()<<endl;
>>>>>>> a3ca6b069e34476aae5903271bff19032c4c37ff
        
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
            continue;
        }

        if((a%2!=0) && b<2*a){
            cout<<-1<<endl;
            continue;
        }
        
        if(a>b){
            int c=0;
            int u=0;
            if(a%b==0){
                u=a/b;
            }
            
            while(u%8==0 && u!=0){
                u/=8;
                c++;
            }
            while(u%4==0 && u!=0){
                u/=4;
                c++;
            }
            while(u%2==0 && u!=0){
                u/=2;
                c++;
            }

            if(u==1){
                cout<<c<<endl;
                continue;
            }else{
                cout<<-1<<endl;
                continue;
            }
        }

        if(a<b){
            int c=0;
            int u=0;
            if(b%a==0){
                u=b/a;
            }
            

            while(u%8==0 && u!=0){
                u/=8;
                c++;
            }
            while(u%4==0 && u!=0){
                u/=4;
                c++;
            }
            while(u%2==0 && u!=0){
                u/=2;
                c++;
            }

            if(u==1){
                cout<<c<<endl;
                continue;
            }else{
                cout<<-1<<endl;
                continue;
            }
        }

    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int z=0;
        int y=0;
        string x,s;
        int n,m;
        cin>>n>>m;
        cin>>x;
        cin>>s;
        string u=x;
        
        while(u.length()<=250){
            
            if(u.length()>=m){
                for(int e=0;e<=u.length()-m;e++){
                string w=u.substr(e,m);
                if(w==s){
                    cout<<z<<endl;
                    y=1;
                    break;
                }
            }
            }
            if(y==1){
                break;
            }
            u=u+u;
            z++;
            
        }
        if(y==0){
                cout<<-1<<endl;
            }
    }
    return 0;
}
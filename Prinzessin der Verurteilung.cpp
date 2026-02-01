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
        
        string m="";

        for(char i='a';i<='z';i++){
            if(s.find(i)==string::npos){
                m=i;
                break;
            }
        }

        for(char i='a';i<='z';i++){
            for(char j='a';j<='z';j++){
                string h="";
                h+=i;
                h+=j;
                if(m=="" && s.find(h)==string::npos){
                    m=h;
                    break;
                }
            }
        }

        for(char i='a';i<='z';i++){
            for(char j='a';j<='z';j++){
                for(char k='a';k<='z';k++){
                    string h="";
                    h+=i;
                    h+=j;
                    h+=k;
                    if(m=="" && s.find(h)==string::npos){
                        m=h;
                        break;
                    }
                }
            }
        }

        cout<<m<<endl;
    }
    return 0;
}
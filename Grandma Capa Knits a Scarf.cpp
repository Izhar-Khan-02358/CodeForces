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

        int u=n+1;
        for(char i='a';i<='z';i++){
            int p=0;
            int q=n-1;

            int h=0;

            while(p<=q){
                if(s[p]==s[q]){
                    p++;
                    q--;
                }else if(s[p]==i){
                    h++;
                    p++;
                }else if(s[q]==i){
                    h++;
                    q--;
                }else{
                    h=n+1;
                    break;
                }
            }

            u=min(u,h);
        }

        if(u==n+1){
            u=-1;
        }

        cout<<u<<endl;
    }
    return 0;
}
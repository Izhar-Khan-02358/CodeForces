#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        string t;
        cin>>s>>t;
        vector<int>freq(26);
        for(int i=0;i<t.length();i++){
            freq[t[i]-'A']++;
        }

        for(int j=s.length()-1;j>=0;j--){
            if(freq[s[j]-'A']>0){
                freq[s[j]-'A']--;
            }else{
                s[j]='.';
            }
        }

        string u="";
        for(int i=0;i<s.length();i++){
            if(s[i]!='.'){
                u+=s[i];
            }
        }

        if(u==t){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
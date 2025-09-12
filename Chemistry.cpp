#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,k;
        string s;
        cin >> n >> k >> s;
 
        vector<int> freq(26);
        for(char ch : s){
            freq[ch-'a']++;
        }
 
        int oddCount = 0;
        for(int f : freq){
            if(f % 2 == 1) 
            oddCount++;
        }
 
        if(oddCount - k <= 1){
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;;
        }
    }
    return 0;
}
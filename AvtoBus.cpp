#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long x=0;
        long long y=0;
        if(n%2!=0 or n<4){
            cout<<-1<<endl;
            continue;
        }
       cout<<(n/6)+bool(n%6!=0)<<" "<<n/4<<"\n";
    }
    return 0;
}
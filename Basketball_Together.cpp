#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar.begin(),ar.end());
    reverse(ar.begin(),ar.end());
    int u=n;
    int v=0;
    int a=0;
    int i=0;
    while(i<n){
        v=(d/ar[i])+1;

        if(u>=v && v*ar[i]>d){
            a++;
            u-=v;
        }
        i++;
    }

    cout<<a<<endl;
    return 0;
}
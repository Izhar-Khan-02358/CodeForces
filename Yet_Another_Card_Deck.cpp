#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
        int n,q;
        cin>>n>>q;
        deque<int>a;
        vector<int>b;
        vector<int>c;
        int x=0;
        for(int i=0;i<n;i++){
            cin>>x;
            a.push_back(x);
        }

        for(int i=0;i<q;i++){
            cin>>x;
            b.push_back(x);
        }

        for(int i=0;i<q;i++){
            for(int j=0;j<n;j++){
                if(b[i]==a[j]){
                    int k=a[j];
                    c.push_back(j+1);
                    a.erase(a.begin()+j);
                    a.push_front(k);
                    break;
                }
            }
        }

        for(auto x:c){
            cout<<x<<" ";
        }cout<<endl;
        
    return 0;
}
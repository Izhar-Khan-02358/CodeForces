#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

bool kla(vector<int>&v){
    for(int i=0;i<v.size();i++){
        if(v[i]!=(i+1)){
            return false;
        }
    }

    return true;
}

void f1(vector<int>&v){
    for(int i=0;i<v.size();i+=2){
        swap(v[i],v[i+1]);
    }
}

void f2(vector<int>&v){
    for(int i=0;i<v.size()/2;i++){
        swap(v[i],v[i+(v.size()/2)]);
    }
}

void solve(){
    int m;
    cin>>m;
    int n=2*m;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    if(kla(ar)){
        cout<<0<<endl;
        return;
    }

    vector<int>br=ar;
    vector<int>cr=ar;

    int a=0;
    while(true){
        if(a%2==0){
            f1(cr);
        }else{
            f2(cr);
        }
        a++;

        if(kla(cr)){
            break;
        }

        if(cr==br){
            a=-1;
            break;
        }
    }

    int b=0;
    vector<int>dr=ar;
    while(true){
        if(b%2==0){
            f2(dr);
        }else{
            f1(dr);
        }
        b++;

        if(kla(dr)){
            break;
        }

        if(dr==br){
            b=-1;
            break;
        }
    }
    

    if(a==-1 && b==-1){
        cout<<-1<<endl;
        return;
    }

    if(a==-1){
        cout<<b<<endl;
        return;
    }
    
    if(b==-1){
        cout<<a<<endl;
        return;
    }

    cout<<min(a,b)<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
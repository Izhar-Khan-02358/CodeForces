#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl '\n'

const int N=2*(1e5)+1;

void solve() {
    string s;cin>>s;

    set<pair<int,int>>st;

    int x=0,y=0;
    st.insert({x,y});
    for(int i=0;i<s.length();i++){
        if(s[i]=='L'){
            x--;
        }else if(s[i]=='R'){
            x++;
        }else if(s[i]=='U'){
            y++;
        }else{
            y--;
        }

        if(st.count({x,y})){
            cout<<"BUG"<<endl;
            return;
        }

        int h=0;
        if(st.count({x+1,y})){
            h++;
        }
        if(st.count({x-1,y})){
            h++;
        }
        if(st.count({x,y+1})){
            h++;
        }
        if(st.count({x,y-1})){
            h++;
        }

        if(h>1){
            cout<<"BUG"<<endl;
            return;
        }

        st.insert({x, y});
    }

    cout<<"OK"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
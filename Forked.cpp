#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,k,l,p,q;
        cin>>a>>b;
        cin>>k>>l;
        cin>>p>>q;

        int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
        set<pair<int, int>> king_hits, queen_hits;

		
		for (int j=0;j<4;j++){
			king_hits.insert({k+dx[j]*a,l+dy[j]*b});
			king_hits.insert({k+dx[j]*b,l+dy[j]*a});

			queen_hits.insert({p+dx[j]*a,q+dy[j]*b});
			queen_hits.insert({p+dx[j]*b,q+dy[j]*a});
		}

		int ans=0;
		for(auto position:king_hits){
			if(queen_hits.find(position)!=queen_hits.end()){
				ans++;}
        }
		cout << ans << endl;
	}
	return 0;
}
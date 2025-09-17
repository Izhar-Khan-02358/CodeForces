#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<long long> ar(n + 1), pref(n + 1, 0);

        long long totalSum = 0;
        for (int i = 1; i <= n; i++) {
            cin >> ar[i];
            totalSum += ar[i];
            pref[i] = pref[i - 1] + ar[i];
        }

        while (q--) {
            int l, r;
            long long k;
            cin >> l >> r >> k;

            long long segSum = pref[r] - pref[l - 1];
            long long newSum = totalSum - segSum + (r - l + 1) * k;

            if(newSum%2==0){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        int ar[n];
        for(int j=0;j<n;j++){
            cin>>ar[j];
        }
        sort(ar,ar+n);

        int longest = 1, curr = 1;
        for (int u= 1; u< n; u++) {
            if (ar[u] - ar[u - 1] <= k) {
                curr++;
                longest = max(longest, curr);
            } else {
                curr = 1;
            }
        }

        cout << n - longest << "\n";
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++) cin >> ar[i];

        int u = 0;
        for (int i = 0; i < n; i++) {
            if (ar[i] != 0) {
                u++;
                while (i < n && ar[i] != 0) i++;
            }
        }

        u = min(u, 2);
        cout << u << "\n";
    }
    return 0;
}

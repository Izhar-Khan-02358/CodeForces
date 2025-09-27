#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;

        bool ok = false;

        if ((2*b - c) > 0 && (2*b - c) % a == 0) ok = true;

        if ((a + c) % (2*b) == 0 && (a + c) / (2*b) > 0) ok = true;

        if ((2*b - a) > 0 && (2*b - a) % c == 0) ok = true;

        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}

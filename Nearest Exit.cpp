#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; 
    if(!(cin >> T)) return 0;
    while (T--) {
        int X; cin >> X;
        cout << (X <= 50 ? "LEFT" : "RIGHT") << "\n";
    }
    return 0;
}

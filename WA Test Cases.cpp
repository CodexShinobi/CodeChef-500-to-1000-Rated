#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; 
    if(!(cin >> T)) return 0;
    while (T--) {
        int N; cin >> N;
        vector<int> S(N);
        for (int i = 0; i < N; ++i) cin >> S[i];
        string V; cin >> V;
        int ans = INT_MAX;
        for (int i = 0; i < N; ++i) {
            if (V[i] == '0') ans = min(ans, S[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}

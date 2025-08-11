#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; 
    if(!(cin >> T)) return 0;
    while (T--) {
        long long N, X;
        cin >> N >> X;
        long long total = N * X;
        long long pizzas = (total + 3) / 4; // ceil(total/4)
        cout << pizzas << '\n';
    }
    return 0;
}

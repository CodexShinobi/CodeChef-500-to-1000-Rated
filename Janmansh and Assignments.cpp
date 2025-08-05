#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        
        // If he starts at time x, he'll finish at x + 3
        // It must be ≤ 10 pm to finish on time
        if (x + 3 <= 10) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}

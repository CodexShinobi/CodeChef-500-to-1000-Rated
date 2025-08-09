#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X;
        cin >> X;
        int finalAmount;

        if (X <= 100)
            finalAmount = X;
        else if (X <= 1000)
            finalAmount = X - 25;
        else if (X <= 5000)
            finalAmount = X - 100;
        else
            finalAmount = X - 500;

        cout << finalAmount << endl;
    }
    return 0;
}

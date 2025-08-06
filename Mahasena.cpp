#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  // Number of soldiers

    int even_count = 0, odd_count = 0;

    for (int i = 0; i < N; i++) {
        int weapons;
        cin >> weapons;

        if (weapons % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    if (even_count > odd_count)
        cout << "READY FOR BATTLE" << endl;
    else
        cout << "NOT READY" << endl;

    return 0;
}

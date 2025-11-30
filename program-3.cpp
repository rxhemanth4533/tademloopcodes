#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    // number of odd terms to print: 1,3,5,... (largest odd <= a)
    int k = (a % 2 == 0) ? a - 1 : a;

    for (int i = 1; i <= k; i++) {
        int term = 2 * i - 1;  // i-th odd number
        cout << term;
        if (i != k) cout << ",";
    }

    return 0;
}

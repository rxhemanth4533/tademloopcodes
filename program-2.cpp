#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int current = 1;        // first odd number
    cout << "Series: ";
    for (int i = 1; i <= n; i++) {
        cout << current;
        if (i != n) {
            cout << ", ";
        }
        current = current + 2;  // next odd number
    }

    cout << endl;
    return 0;
}

#include <iostream>
using namespace std;

long long catalan(int n) {
    long long res = 1;

    // Calculate (2n choose n)
    for (int i = 0; i < n; i++) {
        res *= (2 * n - i);
        res /= (i + 1);
    }

    // Divide by (n + 1)
    return res / (n + 1);
}

int main() {
    int n;
    cin >> n;

    cout << catalan(n) << endl;

    return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {

    // Write your code here
    int N = 0;
    cout << "Enter the height of A: ";
    cin >> N;

    for (int i = 0; i <= N; i++) {

        for (int j = 0; j <= N / 2; j++) {

            if (i == 0 || j == 0 || i == N / 2 || j == N / 2) {
                if (i == 0 && (j == 0 || j == N / 2)) {
                    cout << " ";
                } else {
                    cout << "*";
                }
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
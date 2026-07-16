#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void printPattern(int N) {

    int rows = 2 * N - 1;
    int columns = rows;
    int mid = N;

    for (int i = 1; i <= rows; i++) {

        for (int j = 1; j <= columns; j++) {
            if ( j == 1 || j == columns || i == j || i==mid || i+j==2*N) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    // Write your code here
    printPattern(4);
    return 0;
}
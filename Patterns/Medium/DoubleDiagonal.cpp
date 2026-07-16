#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printPattern(int N){
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {

            if (i == 1 || j == 1 || i == N || j == N || i==j || (i+j == N+1)) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {

    // Write your code here
    printPattern(10);

return 0;
}
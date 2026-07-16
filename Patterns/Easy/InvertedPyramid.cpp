#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Write your code here
    int height = 0;
    cin >> height;
    for (int i = height; i >= 0; i--) {
        int space = height - i;

        // print spaces
        for (int j = 0; j <= space; j++) {
            cout << " " ;
        }

        // print stars
        for (int k = 0; k < i; k++) {
            cout << "* ";
        }
        cout<< " " << endl ;
    }

    return 0;
}
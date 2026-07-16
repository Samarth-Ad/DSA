#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void HollowRectangle(int length, int width) {
    for (int i = 1; i <= width; i++) {
        for (int j = 1; j <= length; j++) {

            if (i == 1 || j == 1 || i == width || j == length) {
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
    int length = 11, width = 5 ;
    HollowRectangle(length,width);
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int height = 0;
    cin >> height;
    for (int i = height; i >= 0; i--) {
        for (int j = i; j >= 0; j--) {
            cout<< "* " ;
        }
        cout<< " " << endl ;
    }
    return 0;
}

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void SolidSquare(int N) {

    for (int i = 0; i < N; i++) {

        for (int j = 0; j < N; j++) {
            cout << "* ";
        }

        cout << endl;
    }
}

void HollowSquare(int N) {
    // Method 1 with double spaces
    // for (int i = 1; i <= N; i++) {
    //     for (int j = 1; j <= N; j++) {

    //         if (i == 1 || j == 1 || i == N || j == N) {
    //             cout << "* ";
    //         }
    //         else {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    // Method 2 (GfG method)
    for (int i = 1; i <= N; i++) {
        if (i == 1 || i == N) {
            for (int j = 1; j <= N; j++) {
                cout << "* ";
            }
        } 
        else {
            for (int j = 1; j <= N; j++) {
                if (j == 1 || j == N) {
                    cout << "* ";
                } 
                else {
                    cout << "  ";
                }
            }
        }
        cout<<endl;
    }
}
int main() {
    // Write your code here
    HollowSquare(5);
    return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void Swastik(int N) {

    if (N % 2 == 0) {
        cout << "N must be odd";
        return;
    }
    int mid = N/2 ;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            

            if(
                // Middle row
                i == mid ||

                //Top arm
                (i == 0 && j<= mid) || (j == N - 1 && i <= mid) ||

                // left vertical arm
                (j == 0 && i>= mid) ||

                // bottom arm
                (i== N-1 && j>= mid) ||

                // Left vertical line through center
                (j==mid)
            ){
                cout<<"* ";
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

    Swastik(9);
    return 0;
}


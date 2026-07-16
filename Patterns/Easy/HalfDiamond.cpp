#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Write your code here

    int N = 0;
    cout << "Enter the value of N for half diamond: ";
    cin >> N;

    // 1. Upright half pyramid
    for (int i = 1; i<= N; i++) {
        for (int j = 1; j<=i; j++){
            cout<<"* ";
        }
        cout<< endl ;
    }
    
    // 2. Upright half pyramid
    for(int i=N-1; i>=0; i--){
        for(int j=1; j<=i; j++){
            cout<< "* ";
        }
        cout<< endl ;
    }

    return 0;
}
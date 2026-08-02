#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int **create2DJaggedArray(const int &rows, int sizes[]);
void initialize2DJaggedArray(int **arr, const int &rows,int sizes[]);
void print2D2DJaggedArray(int **arr, const int &rows,int sizes[]);
void delete2DJaggedArray(int **arr, const int &rows);

// main
int main() {
    // Write your code here
    return 0;
}

int **create2DJaggedArray(const int &rows, int sizes[]) {
    int **arr = new int *[rows];

    for (int i = 0; i < rows; i++) {
        arr[i] = new int[sizes[i]];
    }

    return arr;
}

void initialize2DJaggedArray(int **arr, const int &rows,int sizes[]){
    cout << "Enter " << rows * columns << " elements:\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> arr[i][j];
        }
    }
}




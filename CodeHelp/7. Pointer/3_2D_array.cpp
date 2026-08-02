#include <iostream>
using namespace std;

int **create2DArray(const int &rows, const int &columns);
void initializeArray(int **arr, const int &rows, const int &columns);
void print2DArray(int **arr, const int &rows, const int &columns);
void delete2DArray(int **arr, const int &rows);

// main
int main() {
    int rows, columns;

    cout << "Enter the value for rows: ";
    cin >> rows;

    cout << "Enter the value for columns: ";
    cin >> columns;

    int **arr = create2DArray(rows, columns);

    initializeArray(arr, rows, columns);
    print2DArray(arr, rows, columns);

    delete2DArray(arr, rows);


    return 0;
}

int **create2DArray(const int &rows, const int &columns) {
    int **arr = new int *[rows];

    for (int i = 0; i < rows; i++) {
        arr[i] = new int[columns];
    }

    return arr;
}

void initializeArray(int **arr, const int &rows, const int &columns) {
    cout << "Enter " << rows * columns << " elements:\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> arr[i][j];
        }
    }
}

void print2DArray(int **arr, const int &rows, const int &columns) {
    cout << "\nArray is:\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void delete2DArray(int **arr, const int &rows) {
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }

    delete[] arr;
}

